#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string original, target;
    cin >> original >> target;
    int movie = 0;
    for (int i = 0; i < n; i++)
    {
        int a = original[i] - '0';
        int b = target[i] - '0';
        int res = abs(a - b);
        movie += min(res, 10 - res);
    }
    cout << movie;
}