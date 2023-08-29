#include "string"
#include "iostream"

using namespace std;

class Input
{
private:
    Input()
    {
    }

public:
    static Input* get() {
        static Input* instance = new Input();
        return instance;
    }

    string getString(string label) {
        cout << label;
        string input;
        cin >> input;
        return input;
    }

    int getInt(string label) {
        cout << label;
        int input;
        cin >> input;
        return input;
    }
    float getFloat(string label) {
        cout << label;
        float input;
        cin >> input;
        return input;
    }
};