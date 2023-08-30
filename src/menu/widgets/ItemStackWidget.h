#pragma once
#include "../Widget.h"

using namespace std;

class ItemStackWidget : public Widget
{
public:
    ItemStackWidget();

    virtual void beforeRender();
    virtual void render();
};