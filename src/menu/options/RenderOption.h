#pragma once
#include "../Option.h"
#include "../Widget.h"
#include <string>

using namespace std;

class RenderOption : public Option {
    public:
        RenderOption(string label, Widget* widget);
        void process();
};