#pragma once
#include <iostream>

template <typename T>
class Storage
{
	T value;
public:
	Storage(T value) : value{ value } {}
	void Print();
};

template <typename T>
void Storage<T>::Print()
{
	std::cout << "value = " << value << "\n";
}

template<>
void Storage<double>::Print()
{
	std::cout << "value = " << std::scientific << value << "\n";
}
