#include <iostream>
#include <string>
int operation;
int Sum(int numb1, int numb2)
{
    return numb1 + numb2;
}
int Min(int numb1, int numb2)
{
    return numb1 - numb2;
}
int Mult(int numb1, int numb2)
{
    return numb1 * numb2;
}
int Del(int numb1, int numb2)
{
    if (numb2 != 0)
    {
        return numb1 / numb2;
    }
    else
    {
        std::cerr << "Error!\n";
    }
}
int Rem(int numb1, int numb2)
{
    return numb1 % numb2;
}
int Ex(int numb1, int numb2)
{
    numb2--;
    int step = numb1;
    while (numb2 > 0)
    {
        step = step * numb1;
        numb2--;
    }
    return step;
}
int Rad(int numb1, int numb2)
{
    int koren = 1;
    while (koren < numb1)
    {
        if (numb1 / koren == koren)
        {
            return koren;
        }
        koren++;
    }
    return 0;
}
void MakeDecision(int (*Act)(int numb1, int numb2))
{
    if (operation != 7)
    {
        int numberOne, numberTwo;
        std::cout << "Введите первое число\n";
        std::cin >> numberOne;
        std::cout << "Введите второе число\n";
        std::cin >> numberTwo;
        std::cout << Act(numberOne, numberTwo);
    }
    else
    {
        int numberOne;
        std::cout << "Введите число\n";
        std::cin >> numberOne;
        std::cout << Act(numberOne, 0);
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    std::cout << "Выберите операцию:\n1 - Сложить \n2 - Вычесть \n3 - Умножить \n4 - Разделить";
    std:: cout << "\n5 - Найти остаток \n6 - Возвести в степень \n7 - Найти квадратный корень числа\n";
    std::cin >> operation;
    if (operation == 1)
    {
        MakeDecision(Sum);
    }
    else if (operation == 2)
    {
        MakeDecision(Min);
    }
    else if (operation == 3)
    {
        MakeDecision(Mult);
    }
    else if (operation == 4)
    {
        MakeDecision(Del);
    }
    else if (operation == 5)
    {
        MakeDecision(Rem);
    }
    else if (operation == 6)
    {
        MakeDecision(Ex);
    }
    else
    {
        MakeDecision(Rad);
    }
    

    return 0;
}

