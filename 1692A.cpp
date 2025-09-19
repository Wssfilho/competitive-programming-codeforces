#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int k = 0;
        int a; int b; int c; int d;
        cin >> a; cin >> b; cin >> c; cin >>d ;
        if(a < b)
        {
            k++;
        } 
        if (a < c)
        {
            k++;
        }
        if(a < d)
        {
            k++;
        }
        cout << k << '\n';
    }
}