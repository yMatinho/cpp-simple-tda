#pragma once
#include "TextCryptStrategy.h"
#include "string"

using namespace std;

class ROT13Strategy : public TextCryptStrategy
{
    private:
    int key;
public:
    ROT13Strategy(int key=13) : TextCryptStrategy()
    {
        this->key = key;
    }

    string execute(string input)
    {
        for (std::string::size_type len = input.length(), idx = 0; idx != len; ++idx)
        {
            if (input[idx] >= 'a' && input[idx] <= 'm')
            {
                input[idx] = input[idx] + this->key;
            }
            else if (input[idx] >= 'n' && input[idx] <= 'z')
            {
                input[idx] = input[idx] - this->key;
            }
            else if (input[idx] >= 'A' && input[idx] <= 'M')
            {
                input[idx] = input[idx] + this->key;
            }
            else if (input[idx] >= 'N' && input[idx] <= 'Z')
            {
                input[idx] = input[idx] - this->key;
            }
        }

        return input;
    }
};