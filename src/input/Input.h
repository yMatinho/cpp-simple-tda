#pragma once
#include "string"
#include "iostream"
#include "stdio.h"

using namespace std;

class Input
{
private:
    Input()
    {
    }

public:
    static Input *get()
    {
        static Input *instance = new Input();
        return instance;
    }

    string getString(string label)
    {
        cout << label;
        string input;
        getline(std::cin >> std::ws, input);
        return input;
    }

    int getInt(string label)
    {
        cout << label;
        int input;
        cin >> input;
        return input;
    }
    float getFloat(string label)
    {
        cout << label;
        float input;
        cin >> input;
        return input;
    }
    void anyKey(string label)
    {
        cout << label;
        cin.ignore();
        cin.ignore();
    }
};