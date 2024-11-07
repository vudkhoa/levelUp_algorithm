#include <bits/stdc++.h>
using namespace std;


void calculation(int &x, string str) { 
    if (str == "X++" || str == "++X") {
        x += 1;
        return;
    }
    x -= 1;
    
}
int main() { 
    int x = 0;
    int test;
    cin >> test;
    string str = "";
    for (int i = 0; i < test; ++i) {
        cin >> str;
        calculation(x, str);
    }
    cout << x;
    return 0;
}