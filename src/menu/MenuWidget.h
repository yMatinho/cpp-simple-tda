#pragma once
#include "Widget.h"
#include <vector>
#include "string"
#include "Option.h"
using namespace std;

class MenuWidget : public Widget
{
private:
    string introductionText;
    vector<Option *> options;

public:
    MenuWidget(vector<Option *> options, string introductionText);
    void beforeRender();
    void render();

private:
    void chooseOption();
    void renderChoosedOption(int option);
    void renderOptions();
};