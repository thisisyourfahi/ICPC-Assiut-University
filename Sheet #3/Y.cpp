#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<long long> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<long long> prefix_sum_a(n + 1);
    prefix_sum_a[1] = a[1];
    for(int i = 2; i <= n; i++) {
        prefix_sum_a[i] = prefix_sum_a[i - 1] + a[i];
    }

    while (q--)
    {
        long long l, r; cin >> l >> r;
        long long sum;
        if(l == 1) {
            sum = prefix_sum_a[r];
        }
        else {
            sum = prefix_sum_a[r] - prefix_sum_a[l - 1];
        }
        cout << sum << endl;
    }
    
    return 0;
}
