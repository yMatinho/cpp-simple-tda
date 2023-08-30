#pragma once
#include <string>
#include "Widget.h"

using namespace std;

class Option {
    protected:
        string label;
        Widget* widget;
    public:
        Option(string label, Widget* widget);

        void renderMenu();

        virtual void process();
        
        string getLabel();
};