#pragma once
#include "Widget.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "Option.h"
#include <iostream>

using namespace std;

class MenuWidget : public Widget {
    private:
        string introductionText;
        vector<Option*> options;
    public:
        MenuWidget(vector<Option*> options, string introductionText) {
            this->options = options;
            this->introductionText = introductionText;
        }
        void render() {
            cout << "\n\n" << this->introductionText << "\n\n";
            this->renderOptions();
            this->chooseOption();
        }

        
    private:
        void chooseOption() {
            int choosedOption;
            cout << "\n\n\nEscolha sua opção: ";
            cin >> choosedOption;
            this->renderChoosedOption(choosedOption);
        }
        void renderChoosedOption(int option) {
            if(this->options[option - 1]) {
                this->options[option -1]->process();
                return;
            }
            cout << "Opção inválida! Tente de novo\n\n";
            this->render();  
        }
        void renderOptions() {
            for (int i = 0; i < this->options.size(); i++)
            {
                printf("\n%d. %s\n", i + 1, this->options[i]->getLabel().c_str());
            }
        }

};