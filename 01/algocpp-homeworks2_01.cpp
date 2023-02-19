// Домашнее задание к занятию «Динамическое программирование и жадность»
// Задача 1. Снова числа Фибоначчи

#include <iostream>


int fooFibonacci(int n)
{                 
	if (n == 0 )
	{                                         
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fooFibonacci(n - 2) + fooFibonacci(n - 1);
	}
};

int main()
{
	std::cout << fooFibonacci(9) << std::endl;
}

