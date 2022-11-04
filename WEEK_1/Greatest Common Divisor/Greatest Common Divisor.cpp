#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b, max = 1;

    cout << "Ведите два наутральных числа:\n" << "а = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    for (int i = 1; i <= a && b; i++) {
        if (a % i == 0 && b % i == 0) max = i;
    }

    cout << "максимальный общий делитель: " << max;
}