#pragma once

class Widget {
    protected:
        Widget() {}
    public:
        virtual void render();
        virtual void beforeRender();
};