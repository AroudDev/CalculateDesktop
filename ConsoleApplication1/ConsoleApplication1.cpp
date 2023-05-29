#include <iostream>
#include <Windows.h>

int OperationRequest();
double NumberRequest();
void PerfomingAnOperation();
void sum(double number1, double number2);
void substraction(double number1, double number2);
void multiply(double number1, double number2);
void segmentation(double number1, double number2);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true)
    {
        PerfomingAnOperation();
    }
    return 0;
}

void PerfomingAnOperation()
{
    double number1 = NumberRequest();
    double number2 = NumberRequest();

    switch (OperationRequest())
    {
    case 1:
        sum(number1, number2);
        break;

    case 2:
        substraction(number1, number2);
        break;

    case 3:
        multiply(number1, number2);
        break;

    case 4:
        segmentation(number1, number2);
        break;
    }

    std::cout << "Повторим?" << "\n";
}


double NumberRequest()
{
    double number;

    std::cout << "Введите число: " << "\n";
    std::cin >> number;

    return number;
}

int OperationRequest()
{

    int operation;

    while (true)
    {
        std::cout << "1. Сложение" << "\n";
        std::cout << "2. Вычитание" << "\n";
        std::cout << "3. Умножение" << "\n";
        std::cout << "4. Деление" << "\n";
        std::cout << "\n";

        std::cout << "Введите цифру операции: ";
        std::cin >> operation;

        if (operation < 1 || operation > 4)
        {
            std::cout << "\aПожалуйста, выберите цифру правильно. " << "\n";
            std::cout << "\n";
            continue;
        }
        else
        {
            return operation;
        }
    }
}

void sum(double number1, double number2)
{
    std::cout << number1 << " + " << number2 << " = " << number1 + number2 << "\n";
    std::cout << "\n";
}

void substraction(double number1, double number2)
{
    std::cout << number1 << " - " << number2 << " = " << number1 - number2 << "\n";
    std::cout << "\n";
}

void multiply(double number1, double number2)
{
    std::cout << number1 << " * " << number2 << " = " << number1 * number2 << "\n";
    std::cout << "\n";
}

void segmentation(double number1, double number2)
{
    std::cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n";
    std::cout << "\n";
}

