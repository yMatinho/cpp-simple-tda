#pragma once
#include "../Widget.h"
#include <vector>

using namespace std;

class GradeAverageWidget : public Widget
{
public:
    GradeAverageWidget();

    void beforeRender();
    void render();

private:
    float calculateAverage(vector<float> grades);
    vector<float> inputGrades();
    bool isValidGrade(float grade);
    bool wishToContinue();
};