#include "GradeAverageWidget.h"
#include "../Widget.h"
#include <vector>
#include <cmath>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"
#include "iostream"
#include "../../input/Input.h"

GradeAverageWidget::GradeAverageWidget()
{
}

void GradeAverageWidget::beforeRender()
{
    Widget::beforeRender();
    system("clear||cls");
}

void GradeAverageWidget::render()
{
    Widget::render();
    printf("Bem vindo à seção de média das notas!\n\n\n");
    vector<float> grades = this->inputGrades();
    cout << "A média das notas é: \n\n\n"
         << this->calculateAverage(grades) << "\n\n";
}

float GradeAverageWidget::calculateAverage(vector<float> grades)
{
    float gradeSum = 0;
    for (int i = 0; i < grades.size(); i++)
        gradeSum += grades[i];
    return gradeSum / grades.size();
}
vector<float> GradeAverageWidget::inputGrades()
{
    vector<float> grades;
    for (;;)
    {
        static int i = 0;
        float grade = Input::get()->getFloat((string) "\n\nNota: ");
        if (!this->isValidGrade(grade))
            continue;

        grades.push_back(grade);
        i++;

        if (!this->wishToContinue())
            break;
    }

    return grades;
}

bool GradeAverageWidget::isValidGrade(float grade)
{
    if (!floor(grade))
    {
        cout << "\n\nDigite um número ao invés de " << grade << "\n\n";
        return false;
    }

    return true;
}

bool GradeAverageWidget::wishToContinue()
{
    char wishToContinue;
    cout << "\n\nDeseja continuar? Y[es] N[o] \n";
    cin >> wishToContinue;
    if (wishToContinue == 'N')
        return false;
    return true;
}