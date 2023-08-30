#include "ItemStackWidget.h"
#include "../Widget.h"
#include "../../history/History.h"
#include <vector>
#include <cmath>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"
#include "iostream"
#include "../../books/BookStack.h"
#include "../../books/Book.h"

using namespace Books;

ItemStackWidget::ItemStackWidget()
{
}

void ItemStackWidget::beforeRender()
{
    Widget::beforeRender();
    system("clear||cls");
}

void ItemStackWidget::render()
{
    Widget::render();
    printf("Bem vindo à seção de simulação de uma pilha (com id hash)!\n\n\n");
    BookStack *stack = new BookStack();
    stack->add(new Book("Teste", 120));
    stack->add(new Book("Teste2", 160));
    printf("Oiiii");
    History::get()->undo();
}