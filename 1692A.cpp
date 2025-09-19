#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int k = 0;
        k += (a < b);
        k += (a < c);
        k += (a < d);
        
        cout << k << '\n';
    }
}