#pragma once
#include "../Widget.h"

using namespace std;

class ItemStackWidget : public Widget
{
public:
    ItemStackWidget();

    void beforeRender();

    void render();
};