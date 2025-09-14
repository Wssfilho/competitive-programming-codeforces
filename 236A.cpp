#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    set<char> caracter;
    string s;
    cin >> s;
    for (char c : s)
    {
        caracter.insert(c);
    }
    int tam = caracter.size();
    if (tam % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}