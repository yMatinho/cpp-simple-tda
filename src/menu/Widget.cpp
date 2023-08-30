#include "Widget.h"
#include "../history/History.h"

void Widget::beforeRender()
{
    History::get()->add(this);
}

void Widget::render()
{
    this->beforeRender();
}