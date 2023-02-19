// 02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

unsigned long fibDynamic(const int num)
{
    unsigned long fib[num + 1]{};
    fib[0] = 0;
    fib[1] = 1;

    for (unsigned long i = 2; i <= num; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[num];
}


int main(int argc, char** argv)
{
    int num = 0;
    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << std::endl << "Числа Фибоначчи: \n";

    // Выводим число Фибоначчи
    
    std::cout << "Число Фибоначчи: " << fibDynamic(num) << std::endl;
}