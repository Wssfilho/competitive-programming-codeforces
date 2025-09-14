#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int count = 0;
    string num;
    int in = 0;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        int j = num.length();
        count = k = 0;
        if(j > 10)
        {
            while(k < (j - 2))
            {
                count+=1;
                k++;
            }
            cout << num[in] << count << num[k + 1] << "\n";
        }
        else{
            cout << num << '\n';
        }
    }
    

}