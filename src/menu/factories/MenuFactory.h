#pragma once
#include "../../widgets/MenuWidget.h"

using namespace std;

class MenuFactory
{
public:
    MenuFactory();

    virtual MenuWidget *makeMenu() = 0;
};