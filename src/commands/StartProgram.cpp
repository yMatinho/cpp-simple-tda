#include "StartProgram.h"
#include "../exceptions/Exception.h"
#include "../exceptions/BreakException.h"
#include "../widgets/MenuWidget.h"
#include "../menu/options/Option.h"
#include "../menu/factories/MainMenuFactory.h"
#include <iostream>

using namespace Exceptions;
using namespace Commands;

void StartProgram::start()
{
    for (;;)
    {
        try
        {
            cout << "Seja muito bem vindo! \n\n\n";
            MainMenuFactory *menuFactory = new MainMenuFactory();
            menuFactory->makeMenu()->render();
            break;
        }
        catch (BreakException *e)
        {
            cout << "Saindo...";
            break;
        }
        catch (Exception *e)
        {
            cout << e->getMessage();
            break;
        }
    }
}