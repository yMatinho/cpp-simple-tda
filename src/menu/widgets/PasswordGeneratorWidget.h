#pragma once
#include "../Widget.h"

using namespace std;

class PasswordGeneratorWidget : public Widget
{
public:
    PasswordGeneratorWidget();

    virtual void beforeRender();
    virtual void render();
};