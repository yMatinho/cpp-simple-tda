#include "Widget.h"
#include "../history/History.h"

Widget::Widget() {}

void Widget::beforeRender()
{
    History::get()->add(this);
}

void Widget::render()
{
    this->beforeRender();
}

int Widget::getIdentifier() {
    return this->identifier;
}