#pragma once
#include <stdlib.h> 

class Malloc_Alloc
{
public:
	Malloc_Alloc();

	void* Alloc(double size);
	void Free(void* ptr);

	unsigned int allocated;
	unsigned int freed;
};

void* Malloc_Alloc::Alloc(double size)
{
	allocated++;
	return malloc(size);
}

void Malloc_Alloc::Free(void* ptr)
{
	freed++;
}