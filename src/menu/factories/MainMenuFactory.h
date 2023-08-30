#pragma once
#include "../../widgets/MenuWidget.h"
#include "MenuFactory.h"
using namespace std;

class MainMenuFactory : public MenuFactory
{
public:
    MainMenuFactory();
    virtual MenuWidget *makeMenu();
};