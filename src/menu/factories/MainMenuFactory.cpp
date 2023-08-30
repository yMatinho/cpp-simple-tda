#include "MainMenuFactory.h"
#include "../options/BreakOption.h"
#include "../options/RenderOption.h"
#include "../../widgets/MenuWidget.h"
#include "../options/Option.h"
#include "../../widgets/GradeAverageWidget.h"
#include "../../widgets/PasswordGeneratorWidget.h"
#include "../../widgets/EncryptTextWidget.h"
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