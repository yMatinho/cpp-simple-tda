#include "PasswordGeneratorWidget.h"
#include "../Widget.h"
#include "../../input/Input.h"
#include "../../history/History.h"
#include <vector>
#include <cmath>
#include <string>
#include <stdio.h>
#include "../Option.h"
#include "iostream"
#include "../../facades/StringFacade.h"

const string ALPHABET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";

using namespace Facades;

PasswordGeneratorWidget::PasswordGeneratorWidget()
{
}

void PasswordGeneratorWidget::beforeRender()
{
    Widget::beforeRender();
    system("clear||cls");
}

void PasswordGeneratorWidget::render()
{
    Widget::render();
    printf("Bem vindo à seção de gerador de senha!\n\n\n");

    int characters = Input::get()->getInt("\n\nQuantos caracteres terá a senha? \n\n");
    StringFacade* facade = new StringFacade();
    cout << "\n\n" << facade->generateRandom(characters);

    Input::get()->anyKey();
    History::get()->undo();
}