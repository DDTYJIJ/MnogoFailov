#include <iostream>
#include <Windows.h>
#include "Factor.hpp"

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double a, b, result;
    char factor;

    std::cout << "Введите число символ число(например 2 + 3): ";

    if (!(std::cin >> a >> factor >> b))
    {
        std::cout << "Ошибка ввода\n";
        return 1;
    }

    if (factor == '+')
    {
        std::cout << "Равно: " << Plus(a, b) << "\n";
    }
    else if (factor == '-')
    {
        std::cout << "Равно: " << Munis(a, b) << "\n";
    }
    else if (factor == '*')
    {
        std::cout << "Равно: " << Mulitu(a, b) << "\n";
    }
    else if (factor == '/')
    {
        if (Dilen(a, b, result)) {
            std::cout << "Равно: " << result << "\n";
        }
        else 
        {
            std::cout << "Ошибка: деление на ноль\n";
            return 2;
        }
    }
    else 
    {
        std::cout << "Ошибка: неизвестная операция (только + - * /)\n";
        return 3;
    }

    return 0;
}