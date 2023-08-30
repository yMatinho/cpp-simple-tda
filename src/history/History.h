#pragma once
#include "string"
#include "iostream"
#include "../menu/Widget.h"
#include <vector>

using namespace std;

class History
{
private:
    vector<Widget *> widgets;
    History()
    {
        this->widgets = {};
    }

public:
    static History *get()
    {
        static History *instance = new History();
        return instance;
    }

    void add(Widget *widget)
    {
        if (this->peek() != widget)
            this->widgets.push_back(widget);
    }
    void remove()
    {
        if (this->widgets.size() > 0)
            this->widgets.pop_back();
    }
    Widget *peek()
    {
        return this->widgets.size() > 0 ? this->widgets[this->widgets.size() - 1] : nullptr;
    }
    void undo()
    {
        cout << this->widgets.size();
        system("clear||cls");
        this->remove();
        if (this->peek() != nullptr)
            this->peek()->render();
    }
};