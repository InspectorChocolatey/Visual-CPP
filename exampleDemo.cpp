/* 
 * Creating Simple Visual Studio C++ Console Application
 * https://www.youtube.com/watch?v=hCGUWjgvBF4
 *
 * Cplusplus - Hold the console window open?
 * https://stackoverflow.com/questions/1908512/c-hold-the-console-window-open
 *
 * Cplusplus - Identifier not found error on function call
 * https://stackoverflow.com/questions/8329103/identifier-not-found-error-on-function-call?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
 *
 *
 *
 */

#include "stdafx.h"
#include <iostream>

int Addition();

int Addition()
{
	int num1 = 435;
	int num2 = 100;
	int answer;
	answer = num1 + num2;
	return answer;
}

char* array();

char* array()
{
	char x[80] = "Hello World";
	return x;
}

int main()
{
	std::cout << "This is my string (-:" << std::endl;
	std::cout << array() << std::endl;

	int answer = Addition();
	std::cout << answer << std::endl;

	std::cin.get();
    return 0;
}
