#include <iostream>
#include <vector>

using namespace std;

int main() //Перевод натурального числа из десятичной в двоичную систему счисления
{
	setlocale(LC_ALL, "Russian");

	int n, nend;
	vector <int> nvec;

	cout << "Введите натуральное число: ";
	cin >> n;

	while (n > 0) {
		nend = n % 2;
		n /= 2;
		nvec.insert(nvec.begin(), nend);
	}

	if (n == 1) nvec.push_back(1);

	for (int i = 0; i < nvec.size(); i++) {
		if (nvec[i] == 1) break;
		else nvec.erase(nvec.begin());
	}

	for (int i : nvec) {
		cout << i;
	}
}