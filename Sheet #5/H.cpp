#include <bits/stdc++.h>
using namespace std;

void print(int n, char ch) {
    for(int i = 0; i < n; i++) {
        cout << ch << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n;
        char ch;
        cin >> n >> ch;

        print(n, ch);

    }
    

    return 0;
}
