#pragma once
#include "../menu/MenuWidget.h"

using namespace std;

class MenuFactory
{
public:
    MenuFactory();

    virtual MenuWidget *makeMenu() = 0;
};