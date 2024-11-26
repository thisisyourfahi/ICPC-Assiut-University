#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), :: towlower);
    int freq[26] = {0};
    for(auto c : str) {
        if(c == 'e' || c == 'g' || c == 'y' || c == 'p' || c == 't') {
            int ind = c - 97;
            freq[c - 'a'] += 1;
        }
    }
    int possible = min({freq[4], freq[6], freq[15], freq[19], freq[24]});
    cout << possible << endl;

    return 0;
}
