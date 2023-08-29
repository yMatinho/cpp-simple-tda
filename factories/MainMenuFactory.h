#include <vector>
#pragma once
#include "../menu/options/BreakOption.h"
#include "../menu/options/RenderOption.h"
#include "../menu/MenuWidget.h"
#include "../menu/widgets/GradeAverageWidget.h"
#include "../menu/widgets/ItemStackWidget.h"
#include "MenuFactory.h"

using namespace std;

class MainMenuFactory : public MenuFactory
{
public:
    MainMenuFactory() {}

    MenuWidget *makeMenu()
    {
        vector<Option *> options = {};
        options.push_back(new RenderOption("TDA - Média das notas", new GradeAverageWidget()));
        options.push_back(new RenderOption("TDA - Pilha de itens", new ItemStackWidget()));
        options.push_back(new BreakOption("sair"));
        MenuWidget *menu = new MenuWidget(options, "Menu:");
        return menu;
    }
};