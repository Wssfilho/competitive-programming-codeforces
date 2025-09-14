#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0, mais = 0, menos = 0;
    cin >> n;
    while (n--)
    {
        string x;
        cin >> x;
        for (int i = 0; i < (int)x.size(); i++)
        {
            switch (x[i])
            {
            case '+':
                count++;
                break;
            case '-':
            
                count--;
                break;
            case 'X':
                continue;
            default:
                break;
            }
            break;
        }
            
    }
    cout << count;
}