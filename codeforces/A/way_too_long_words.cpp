#include <bits/stdc++.h>

using namespace std;
// strictly more: >;

void convert(string str) {
    if (str.length() > 10) { 
        cout << str[0];
        cout << str.length() - 2;
        cout << str[str.length() - 1];
    }
    else {
        cout << str;
    }
    cout << "\n";
}
int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; ++i) { 
        string s;
        cin >> s;
        convert(s);
    }
    
    return 0;
}