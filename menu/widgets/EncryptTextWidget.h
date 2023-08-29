#pragma once

#include "../Widget.h"
#include <vector>
#include <cmath>
#include <string>
#include <stdio.h>
#include "../../factories/OperationsMenuFactory.h"
#include "../Option.h"
#include "iostream"
#include "../../input/Input.h"
#include "../../crypt/CryptMakerFacade.h"
#include "../../crypt/ROT13Strategy.h"

using namespace std;

class EncryptTextWidget : public Widget
{
public:
    EncryptTextWidget()
    {
    }

    void beforeRender()
    {
        system("clear||cls");
    }

    void render()
    {
        Widget::render();
        printf("Bem vindo à seção para encriptar textos!\n\n\n");
        string text = Input::get()->getString("Texto para encriptar: \n\n");
        int key = Input::get()->getInt("\n\nÓtimo! Agora, qual a chave para encriptar? \n\n");
        CryptMakerFacade *facade = new CryptMakerFacade(new ROT13Strategy(key));
        system("clear||cls");

        cout << "Resultado: \n\n" << facade->encrypt(text) << endl;
    }

private:
};