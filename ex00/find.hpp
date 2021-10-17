/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD17-clement.muth
** File description:
** find
*/

#pragma once

#include <iostream>
#include <algorithm>

template<typename Container>
typename Container::iterator do_find(Container& container, int value)
{
    return (std::find(container.begin(), container.end(), value));
}