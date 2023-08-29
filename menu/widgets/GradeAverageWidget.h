#pragma once

#include "../Widget.h"
#include <vector>
#include <cmath>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"
#include "iostream"

using namespace std;

class GradeAverageWidget : public Widget
{
public:
    GradeAverageWidget()
    {
    }

    void beforeRender()
    {
        system("clear||cls");
    }

    void render()
    {
        Widget::render();
        printf("Bem vindo à seção de média das notas!\n\n\n");
        vector<float> grades = this->inputGrades();
        cout << "A média das notas é: \n\n\n"
             << this->calculateAverage(grades) << "\n\n";
    }

private:
    float calculateAverage(vector<float> grades) {
        float gradeSum = 0;
        for (int i = 0; i < grades.size(); i++)
        {
            gradeSum += grades[i];
        }
        return gradeSum / grades.size();
    }
    vector<float> inputGrades()
    {
        vector<float> grades;
        for (;;)
        {
            static int i = 0;
            cout << "\n\nNota " << i + 1 << ": ";
            float grade;
            cin >> grade;
            if (!this->isValidGrade(grade))
                continue;

            grades.push_back(grade);
            i++;

            if (!this->wishToContinue())
                break;
        }

        return grades;
    }

    bool isValidGrade(float grade)
    {
        if (!floor(grade))
        {
            cout << "\n\nDigite um número ao invés de " << grade << "\n\n";
            return false;
        }

        return true;
    }

    bool wishToContinue()
    {
        char wishToContinue;
        cout << "\n\nDeseja continuar? Y[es] N[o] \n";
        cin >> wishToContinue;
        if (wishToContinue == 'N')
            return false;
        return true;
    }
};