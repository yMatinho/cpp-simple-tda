#include "iostream"
#include "commands/StartProgram.h"
#include "exceptions/Exception.h"
#include "menu/Widget.h"
#include "menu/MenuWidget.h"
#include <vector>
#include <string>
#include <stdio.h>
#include "menu/Option.h"
#include "menu/widgets/TesteWidget.h"

using namespace std;
int main() {
    Commands::StartProgram::start();
    return 0;
}