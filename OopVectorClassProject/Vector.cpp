#include "Vector.h"

template <typename T>
Vector<T>::Vector() : array{ nullptr }, size{ 0 } {};

template <typename T>
Vector<T>::Vector(int size)
	: array{ new int[size] }, size{ size } {};

template <typename T>
Vector<T>::~Vector() { if (array) delete[] array; }
