#pragma once

class Widget {
    protected:
        Widget() {}
    public:
        virtual void render() {
            this->beforeRender();
        }
        virtual void beforeRender() {}
};