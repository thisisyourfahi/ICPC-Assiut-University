#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    while(s.find("EGYPT") >= 0) {
        int ind = s.find("EGYPT");
        if(ind >= 0) {
            s.erase(ind, 5);
            s.insert(s.begin() + ind, ' ');
        }
        else {
            break;
        }
    }
    cout << s << endl;
    

    return 0;
}
