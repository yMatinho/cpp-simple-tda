#pragma once
#include "iostream"
#include "string"
#include "Widget.h"

using namespace std;

class Option {
    protected:
        string label;
        Widget* widget;
    public:
        Option(string label, Widget* widget) {
            this->label = label;
            this->widget = widget;
        }

        void renderMenu() {
            cout << this->getLabel() << endl;
        }

        virtual void process() {}
        
        string getLabel() {
            return this->label;
        } 
};