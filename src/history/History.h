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
    History();

public:
    static History *get();

    void add(Widget *widget);
    void remove();
    Widget *peek();
    void undo();
};