#include <bits/stdc++.h>
using namespace std;

bool checkDivide(int weight) {
    if (weight <= 2) 
        return false;
    if (weight % 2 != 0)
        return false;
    return true;
}

int main() { 
    int n;
    cin >> n;
    if (checkDivide(n)) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}