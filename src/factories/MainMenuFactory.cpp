#include "MainMenuFactory.h"
#include "../menu/options/BreakOption.h"
#include "../menu/options/RenderOption.h"
#include "../menu/MenuWidget.h"
#include "../menu/Option.h"
#include "../menu/widgets/GradeAverageWidget.h"
#include "../menu/widgets/PasswordGeneratorWidget.h"
#include "../menu/widgets/EncryptTextWidget.h"
#include "MenuFactory.h"
#include "vector"

MainMenuFactory::MainMenuFactory() : MenuFactory() {}

MenuWidget *MainMenuFactory::makeMenu()
{
    vector<Option *> options = {};
    options.push_back(new RenderOption("TDA - Média das notas", new GradeAverageWidget()));
    options.push_back(new RenderOption("TDA - Gerador de senha", new PasswordGeneratorWidget()));
    options.push_back(new RenderOption("TDA - Cifra de Caesar", new EncryptTextWidget()));
    options.push_back(new BreakOption("Sair"));
    MenuWidget *menu = new MenuWidget(options, "Menu:");
    return menu;
}