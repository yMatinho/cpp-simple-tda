#pragma once
#include "../Widget.h"

using namespace std;

class HelloWidget : public Widget
{
public:
    HelloWidget();

    virtual void beforeRender();
    virtual void render();
};