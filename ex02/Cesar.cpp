/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** Cesar
*/

#include "Cesar.hpp"

#define BASE_ENCRY ((plainchar > 96) ? (97) : (65))
#define BASE_DECRY ((cipherchar > 96) ? (122) : (90))

#define DECALAGE (plainchar - BASE_ENCRY + _decalage) % 26 + BASE_ENCRY
#define DECALAGE2 (cipherchar - BASE_DECRY - _decalage) % 26 + BASE_DECRY
#define cOutn(message) std::cout << message
#define DECAL_MODULO_26 _decalage = (_decalage + 1) % 26

Cesar::Cesar()
{
    reset();
}

void Cesar::encryptChar(char plainchar) noexcept
{
    if (isalpha(plainchar)) plainchar = DECALAGE;
    DECAL_MODULO_26;
    cOutn(plainchar);
}

void Cesar::decryptChar(char cipherchar) noexcept
{
    if (isalpha(cipherchar)) cipherchar = DECALAGE2;
    DECAL_MODULO_26;
    cOutn(cipherchar);
}

void Cesar::reset() noexcept
{
    _decalage = 3;
}