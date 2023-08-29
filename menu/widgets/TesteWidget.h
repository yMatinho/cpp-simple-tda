#pragma once

#include "../Widget.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"

using namespace std;

class TesteWidget : public Widget
{
public:
    TesteWidget()
    {
    }

    void beforeRender() {
        system("clear||cls");
    }

    void render()
    {
        Widget::render();
        printf("Hello world!\n\n");
        OperationsMenuFactory* menuFactory = new OperationsMenuFactory();
        menuFactory->makeMenu()->render();
    }
};