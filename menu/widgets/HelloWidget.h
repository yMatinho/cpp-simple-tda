#pragma once

#include "../Widget.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"

using namespace std;

class HelloWidget : public Widget
{
public:
    HelloWidget()
    {
    }

    void beforeRender() {
        system("clear||cls");
    }

    void render()
    {
        Widget::render();
        printf("Hello teste!\n\n");
    }
};