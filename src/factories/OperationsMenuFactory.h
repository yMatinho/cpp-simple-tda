#pragma once
#include <vector>
#include "../menu/MenuWidget.h"
#include "MenuFactory.h"

using namespace std;

class OperationsMenuFactory : public MenuFactory
{
public:
    OperationsMenuFactory();

    virtual MenuWidget *makeMenu();
};