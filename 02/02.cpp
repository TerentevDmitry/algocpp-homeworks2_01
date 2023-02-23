// 02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

unsigned long long fooFibonacci(unsigned long long* arrFib, const int size)
{

    


    //unsigned long fib[size];
    arrFib[0] = 0;
    arrFib[1] = 1;

    for (unsigned long long i = 2; i <= size; i++)
    {
        arrFib[i] = arrFib[i - 1] + arrFib[i - 2];
    }
    return arrFib[size];
}




int main()
{
    setlocale(LC_ALL, "ru");

    int size = 0;
    std::cout << "Введите индекс числа Фибоначчи: ";
    std::cin >> size;
    
    
    
    //unsigned long* fib = new unsigned long[size]; 

    unsigned long long* arrFib = new unsigned long long[size];




    //std::cout << std::elongndl << "Число Фибоначчи: \n";
    // Выводим число Фибоначчи
    
    std::cout << "Число Фибоначчи: " << fooFibonacci(arrFib, size) << std::endl;





    delete [] arrFib;
    arrFib = nullptr;
    

}