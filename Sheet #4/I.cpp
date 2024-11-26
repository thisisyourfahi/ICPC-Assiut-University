#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, original_s;
    cin >> s;
    original_s = s;
    reverse(s.begin(), s.end());
    (original_s == s) ? cout << "YES" : cout << "NO";

    return 0;
}
