/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** Cesar
*/

#pragma once

#include <iostream>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {
    public:
        Cesar();
        virtual ~Cesar() = default;

        virtual void decryptChar(char cipherchar) noexcept;
        virtual void encryptChar(char plainchar) noexcept;
        virtual void reset() noexcept;

    protected:
        int _decalage;
};