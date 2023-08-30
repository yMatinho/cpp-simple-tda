#include "History.h"

History::History()
{
    this->widgets = {};
}

History *History::get()
{
    static History *instance = new History();
    return instance;
}

void History::add(Widget *widget)
{
    if (this->peek() != widget)
        this->widgets.push_back(widget);
}
void History::remove()
{
    if (this->widgets.size() > 0)
        this->widgets.pop_back();
}
Widget *History::peek()
{
    return this->widgets.size() > 0 ? this->widgets[this->widgets.size() - 1] : nullptr;
}
void History::undo()
{
    cout << this->widgets.size();
    system("clear||cls");
    this->remove();
    if (this->peek() != nullptr)
        this->peek()->render();
}