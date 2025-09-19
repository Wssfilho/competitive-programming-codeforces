#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string t;
    cin >> t;
    int r = s.size();
    reverse(t.begin(), t.end());
    string n = (s.compare(t) == 0) ? "YES" : "NO";
    cout << n;

}
