// 02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

unsigned long long fooFibonacci(unsigned long long* fib, const int size)
{

    


    //unsigned long fib[size];
    fib[0] = 0;
    fib[1] = 1;

    for (unsigned long long i = 2; i <= size; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[size];
}




int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru");

    int size = 0;
    std::cout << "Введите индекс числа Фибоначчи: ";
    std::cin >> size;
    
    
    
    //unsigned long* fib = new unsigned long[size]; 

    unsigned long long* fib = new unsigned long long[size];




    //std::cout << std::elongndl << "Число Фибоначчи: \n";
    // Выводим число Фибоначчи
    
    std::cout << "Число Фибоначчи: " << fooFibonacci(fib, size) << std::endl;





    //delete [] fib;
    fib = nullptr;
    

}