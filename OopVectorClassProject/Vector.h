#pragma once

template <typename T>
class Vector
{
	T* array;
	int size;
public:
	Vector();
	Vector(int size);
	~Vector();
};



