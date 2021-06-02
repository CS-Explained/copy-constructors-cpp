#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
class Vector
{
private:
    int * vec;
    int size;
public:
	Vector (int size = 10)
    {
		this->size = size;
		this->vec = new int [size];
	}
	Vector (const Vector & other)
	{
		std::cout << "copy constructor" << std::endl;
		this->size = other.size;
		this->vec = new int [this->size];
		for (int i = 0; i < this->size; ++i)
		{
			this->vec[i] = other.vec[i];
		}
	}
	~Vector () 
	{
		delete [] this->vec;
	}
};
#endif