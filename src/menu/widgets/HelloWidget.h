#pragma once
#include "../Widget.h"

using namespace std;

class HelloWidget : public Widget
{
public:
    HelloWidget();

    void beforeRender();

    void render();
};