#pragma once

template <typename T>
typename T::iterator easyfind(T& contain, int target) {

	typename T::iterator it = std::find(contain.begin(), contain.end(), target);
	if (it == contain.end()) {
		throw std::runtime_error("Value not found in container");
	}
	return (it);
}
