#include <vector>
#pragma once
#include "../menu/options/BreakOption.h"
#include "../menu/options/RenderOption.h"
#include "../menu/MenuWidget.h"
#include "../menu/widgets/TesteWidget.h"
#include "MenuFactory.h"

using namespace std;

class MainMenuFactory : public MenuFactory
{
public:
    MainMenuFactory() {}

    MenuWidget *makeMenu()
    {
        vector<Option *> options = {};
        options.push_back(new RenderOption("teste 1", new TesteWidget()));
        options.push_back(new RenderOption("teste 2", new TesteWidget()));
        options.push_back(new RenderOption("teste 3", new TesteWidget()));
        options.push_back(new BreakOption("sair"));
        MenuWidget *menu = new MenuWidget(options, "Menu:");
        return menu;
    }
};