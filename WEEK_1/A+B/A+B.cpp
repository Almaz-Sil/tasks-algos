#include <iostream> 
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;
    std::cout << "Введите значение а: ";
    std::cin >> a;
    std::cout << "\n" << "Введите значение b: ";
    std::cin >> b;
    std::cout << a + b;
    return 0;
}
