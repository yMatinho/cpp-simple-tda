#include "MenuWidget.h"
#include "Widget.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "../menu/options/Option.h"
#include <iostream>

MenuWidget::MenuWidget(vector<Option *> options, string introductionText)
{
	this->options = options;
	this->introductionText = introductionText;
	this->identifier = Widget::MENU;
}

void MenuWidget::beforeRender()
{
	Widget::beforeRender();
	system("clear||cls");
}

void MenuWidget::render()
{
	Widget::render();
	cout << "\n\n"
		 << this->introductionText << "\n\n";
	this->renderOptions();
	this->chooseOption();
}

void MenuWidget::chooseOption()
{
	int choosedOption;
	cout << "\n\n\nEscolha sua opção: ";
	cin >> choosedOption;
	this->renderChoosedOption(choosedOption);
}
void MenuWidget::renderChoosedOption(int option)
{
	if (this->options[option - 1])
	{
		this->options[option - 1]->process();
		return;
	}
	cout << "Opção inválida! Tente de novo\n\n";
	this->render();
}
void MenuWidget::renderOptions()
{
	for (int i = 0; i < this->options.size(); i++)
	{
		printf("\n%d. %s\n", i + 1, this->options[i]->getLabel().c_str());
	}
}