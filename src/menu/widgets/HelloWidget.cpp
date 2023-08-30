#include "HelloWidget.h"
#include "../Widget.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"

HelloWidget::HelloWidget()
{
}

void HelloWidget::beforeRender()
{
    Widget::beforeRender();
    system("clear||cls");
}

void HelloWidget::render()
{
    Widget::render();
    printf("Hello teste!\n\n");
}