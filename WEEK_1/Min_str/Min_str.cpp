﻿#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    vector<string> words = { "fire", "fog", "wood"};
    string min = words[0];

    for(auto i : words) {
        if (i < min)
            min = i;
    }
    cout << min << endl;
}


