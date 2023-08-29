#pragma once
#include "iostream"
#include "string"
#include "../Widget.h"
#include "../../exceptions/BreakException.h"
#include "../Option.h"

using namespace std;

class RenderOption : public Option {
    public:
        RenderOption(string label, Widget* widget) : Option(label, widget) {
        }

        void process() {
            this->widget->render();
        }
};