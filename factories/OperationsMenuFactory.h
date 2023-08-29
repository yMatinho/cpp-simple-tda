#pragma once
#include <vector>
#include "../menu/options/BreakOption.h"
#include "../menu/options/RenderOption.h"
#include "../menu/MenuWidget.h"
#include "../menu/widgets/HelloWidget.h"
#include "MenuFactory.h"

using namespace std;

class OperationsMenuFactory : public MenuFactory
{
public:
    OperationsMenuFactory() {}

    MenuWidget *makeMenu()
    {
        vector<Option *> options = {};
        options.push_back(new RenderOption("Testinho", new HelloWidget()));
        options.push_back(new BreakOption("Início"));
        options.push_back(new BreakOption("Sair"));
        MenuWidget *menu = new MenuWidget(options, "Menu de teste:");
        return menu;
    }
};