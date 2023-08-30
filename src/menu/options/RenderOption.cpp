#include "RenderOption.h"
#include "iostream"
#include "string"
#include "../../widgets/Widget.h"
#include "./Option.h"

RenderOption::RenderOption(string label, Widget *widget) : Option(label, widget)
{
}

void RenderOption::process()
{
    this->widget->render();
}