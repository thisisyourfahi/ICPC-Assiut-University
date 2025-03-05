#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll target;

bool reach_value(ll current) {
    if(current == target) {
        return true;
    }
    if(current > target) {
        return false;
    }
    return(reach_value(current * 10) || reach_value(current * 20));
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> target;
        
        if(reach_value(1)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
