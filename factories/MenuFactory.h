#pragma once
#include <vector>
#include "../menu/options/BreakOption.h"
#include "../menu/options/RenderOption.h"
#include "../menu/MenuWidget.h"
#include "../menu/widgets/TesteWidget.h"

using namespace std;

class MenuFactory
{
public:
    MenuFactory() {}

    virtual MenuWidget *makeMenu()
    {
    }
};