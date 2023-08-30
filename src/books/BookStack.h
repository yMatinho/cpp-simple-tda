#pragma once
#include "Book.h"
#include <vector>

using namespace std;

namespace Books
{

    class BookStack
    {
    private:
        vector<Book *> books;

    public:
        BookStack()
        {
        }

        void add(Book *book)
        {
            this->books.push_back(book);
        }

        void remove()
        {
            this->books.pop_back();
        }

        bool isEmpty() {
            return this->books.size() <= 0;
        }

        Book *peek()
        {
            return this->books[this->books.size() - 1];
        }
    };
}