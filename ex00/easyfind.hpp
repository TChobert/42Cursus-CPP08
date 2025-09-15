#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::reference easyfind(T& contain, int target);

#include "easyfind.tpp"
