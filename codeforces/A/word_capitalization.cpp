#include <bits/stdc++.h>
using namespace std;
void upper_character_first(string &s) { 
    if (s[0] >= 'a' && s[0] <= 'z') { 
        s[0] -= 32;
    }
}
int main() { 
    string s;
    cin >> s;
    upper_character_first(s);
    cout << s;
    return 0;
}