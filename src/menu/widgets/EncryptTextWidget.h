#pragma once
#include "../Widget.h"

using namespace std;

class EncryptTextWidget : public Widget
{
public:
    EncryptTextWidget();

    void beforeRender();
    void render();
};