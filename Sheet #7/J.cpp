#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorial(ll n) {
    if(n == 1) {
        return n;
    }
    return n * factorial(n - 1);
}

int main() {
    ll n; cin >> n;
    cout << factorial(n);

    return 0;
}
