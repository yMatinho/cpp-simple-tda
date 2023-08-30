#include "Option.h"
#include "iostream"
#include "string"
#include "../../widgets/Widget.h"

Option::Option(string label, Widget *widget)
{
	this->label = label;
	this->widget = widget;
}

void Option::renderMenu()
{
	cout << this->getLabel() << endl;
}

void Option::process() {}

string Option::getLabel()
{
	return this->label;
}
