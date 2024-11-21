#include <bits/stdc++.h>
using namespace std;

int smallest_pair(int *a, int n) {
    int pair = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int current_pair = a[i] + a[j] + j - i;
            pair = min(pair, current_pair);
        }
    }

    return pair;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int *a = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << smallest_pair(a, n) << endl;
    }

    return 0;
}
