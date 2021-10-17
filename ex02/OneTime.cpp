/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** OneTime
*/

#include "OneTime.hpp"

#define base_encry(value) (value > 96 ? (97) : (65))
#define base_decry(value) (value > 96 ? (122) : (90))
#define IDX_MODULO_SIZE (_idx + 1) % _key.size();

#define cOutn(message) std::cout << message

#define ONETIME (plainchar - base_encry(plainchar) + (_key[_idx] - base_encry(_key[_idx]))) % 26 + base_encry(plainchar)
#define ONETIME2 (cipherchar - base_decry(cipherchar) - (_key[_idx] - base_encry(_key[_idx]))) % 26 + base_decry(cipherchar)

OneTime::OneTime(std::string key) noexcept :
    _key{key}, _idx{0} {}

void OneTime::encryptChar(char plainchar) noexcept
{
    if (isalpha(plainchar)) plainchar = ONETIME;
    cOutn(plainchar);
    _idx = IDX_MODULO_SIZE;
}

void OneTime::decryptChar(char cipherchar) noexcept
{
    if (isalpha(cipherchar)) cipherchar = ONETIME2;
    cOutn(cipherchar);
    _idx = IDX_MODULO_SIZE;
}

void OneTime::reset() noexcept
{
    _idx = 0;
}