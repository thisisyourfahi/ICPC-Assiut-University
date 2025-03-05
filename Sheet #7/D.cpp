#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void digits(ll n) {
    if(n == 0) {
        cout << 0 << " ";
        return;
    }
    if(n < 10) {
        cout << n << " ";
        return;
    }
    digits(n / 10);
    cout << n % 10 << " ";
}

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        digits(n);
        cout << endl;
    }

    return 0;
}
