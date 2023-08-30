#pragma once
#include "./Widget.h"

using namespace std;

class EncryptTextWidget : public Widget
{
public:
    EncryptTextWidget();

    virtual void beforeRender();
    virtual void render();
};