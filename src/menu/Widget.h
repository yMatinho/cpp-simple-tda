#pragma once

class Widget
{
protected:
    static const int MENU = 1;
    static const int ENCRYPT_TEXT = 2;
    static const int GRADE_AVERAGE = 3;
    static const int PASSWORD_GENERATOR = 4;

    int identifier;
    Widget();
    bool operator==(Widget *c)
    {
        return c->getIdentifier() == this->identifier;
    }

public:
    virtual void render();
    int getIdentifier();
    virtual void beforeRender();
};