#include <iostream>

using namespace std;

int main() //выводить индекс второго вхождения буквы f
{
    setlocale(LC_ALL, "Russian");
    string word;
    int fc = -1, ind;
    cout << "Введите любое слово на ангийлском: ";
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == 'f') {
            fc++;
            if (fc >= 2) break;
            else ind = i;
        }
    }
    
    if (fc == -1) cout << -2;
    else if (fc == 0) cout << -1;
    else cout << ind;
}