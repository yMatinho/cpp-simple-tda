#pragma once
#include "string"
#include "../../widgets/Widget.h"
#include "../../exceptions/BreakException.h"
#include "./Option.h"

using namespace std;

class BreakOption : public Option {
    public:
        BreakOption(string label);
        void process();
};