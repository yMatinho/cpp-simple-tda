#pragma once
#include "string"
#include "../facades/StringFacade.h"

using namespace std;
using namespace Facades;

namespace Books
{
    class Book
    {
    private:
        string id;
        string name;
        int pages;

    public:
        Book(string name, int pages)
        {
            this->name = name;
            this->pages = pages;
            this->id = (new StringFacade())->generateRandom(128);
        }
    };
}