#include "RenderOption.h"
#include "iostream"
#include "string"
#include "../Widget.h"
#include "../../exceptions/BreakException.h"
#include "../Option.h"

RenderOption::RenderOption(string label, Widget *widget) : Option(label, widget)
{
}

void RenderOption::process()
{
    this->widget->render();
}