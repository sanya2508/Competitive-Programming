#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string s[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i)
        if (1 <= i and i <= 9)
            cout << s[i - 1] << endl;
        else
            cout << (i % 2 ? "odd" : "even") << endl;
    return 0;
}

