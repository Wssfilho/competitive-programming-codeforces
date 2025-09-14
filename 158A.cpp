#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int cont = 0;
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    k = k-1;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }
        if (arr[i] >= arr[k])
        {
            cont++;
        }
       
    }
    cout << cont;
}