/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** OneTime
*/

#pragma once

#include <iostream>
#include "IEncryptionMethod.hpp"

#define cOut(message) std::cout << message << std::endl

class OneTime : public IEncryptionMethod {
    public:
        OneTime(std::string key) noexcept;
        virtual ~OneTime() = default;

        virtual void decryptChar(char cipherchar) noexcept;
        virtual void encryptChar(char plainchar) noexcept;
        virtual void reset() noexcept;

    protected:
        std::string _key;
        int _idx;
};