#pragma once
#include <stdlib.h> 

class Temp_Alloc
{
public:
	Temp_Alloc(int total_size);

	void* Alloc(int size);
	void Reset();

private:
	void* base;
	void* free;
};

Temp_Alloc::Temp_Alloc(int total_size)
{
	base = malloc(total_size);
	free = base;
}

void* Temp_Alloc::Alloc(int size)
{
	void* return_ptr = free;
	free = (char*)free + size;
	return return_ptr;
}

void Temp_Alloc::Reset()
{
	free = base;
}