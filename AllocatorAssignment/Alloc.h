#pragma once

void* realloc(void *previous_allocation, unsigned int previous_allocation_size, unsigned int new_allocation_size, unsigned int alignment = 4U);

void dealloc(void *allocation, unsigned int allocation_size);