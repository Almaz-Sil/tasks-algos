#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

double string_to_double(const std::string& s) // Преобразую string в double
{
    std::istringstream i(s);
    double x;
    if (!(i >> x))
        return 0;
    return x;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    double res;
    string s;
    cout << "Ведите значения след формата(между числамы один пробел): 'сумма покупки' 'мин цена 1ой скидки' ' мин цена 2ой скидки' '% 1 скидки' '% 2 скидки'" << "\n";
    getline(cin, s);

    if (s[s.length() - 1] != '!')
        s += '!';

    string tmp;
    vector <double> vs;
    for (int i = 0; i < s.length(); i++)  //перекидываю значения разделенные пробелом на вектор
    {
        if (s[i] == ' ' || s[i] == '!')
        {
            double t = string_to_double(tmp);
            vs.push_back(t);
            tmp.clear();
        }
        else
            tmp += s[i];
    }

    if (vs[2] < vs[0]) {
        double a = vs[0];
        res = a * (1 - double(vs[4])/100);
    }
    else if (vs[1] < vs[0]) {
        double a = vs[0];
        res = a * (1 - double(vs[3]) / 100);
    }
    else {
        res = vs[0];
    }

    cout << "\n" << "К оплате: " << res;

}