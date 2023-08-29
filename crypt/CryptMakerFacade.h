#pragma once
#include "TextCryptStrategy.h"
#include "string"

using namespace std;

class CryptMakerFacade {
    private:
    TextCryptStrategy* strategy;
    public:
    CryptMakerFacade(TextCryptStrategy* strategy) {
        this->strategy = strategy;
    }

    string encrypt(string text) {
        return this->strategy->execute(text);
    }
};