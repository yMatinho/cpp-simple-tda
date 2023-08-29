#pragma once
#include "iostream"
#include "string"
#include "../Widget.h"
#include "../../exceptions/BreakException.h"
#include "../Option.h"

using namespace std;

class BreakOption : public Option {
    public:
        BreakOption(string label) : Option(label, nullptr) {
        }

        void process() {
            throw new Exceptions::BreakException("Broken by user!");
        }
};