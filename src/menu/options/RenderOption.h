#pragma once
#include "../../widgets/Widget.h"
#include "./Option.h"
#include <string>

using namespace std;

class RenderOption : public Option {
    public:
        RenderOption(string label, Widget* widget);
        void process();
};