#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    vector <int> res;

    cout << "Введите начальное число: ";
    cin >> a;
    cout << "\n" << "Введите конечное число: ";
    cin >> b;

    if (a % 2 == 1) a++;

    for (int i = a; i <= b; i += 2) {
        res.push_back(i);
    }

    for (int i : res) cout << i << "\n";
}