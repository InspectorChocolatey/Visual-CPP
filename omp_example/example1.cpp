// OMP.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <omp.h>

using namespace System;

void wait();

int main(array<System::String ^> ^args)
{
	omp_set_num_threads(4);
	printf_s("%d\n", omp_in_parallel());

	#pragma omp parallel
		#pragma omp master
		{
			printf_s("%d\n", omp_in_parallel( ));
		}

		wait(); // wait before exiting...
    return 0;
}

void wait() 
{
	std::cin.get();
}


/*
 *	omp_in_parallel
 *	~Returns nonzero if called from within a parallel region.
 *
 *	https://msdn.microsoft.com/en-us/library/y22bxh22.aspx
 *
 *
 *
 */
