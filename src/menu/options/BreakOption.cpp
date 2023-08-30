#include "BreakOption.h"
#include "iostream"
#include "string"
#include "../../widgets/Widget.h"
#include "../../exceptions/BreakException.h"
#include "./Option.h"
BreakOption::BreakOption(string label) : Option(label, nullptr)
{
}

void BreakOption::process()
{
    throw new Exceptions::BreakException("Broken by user!");
}