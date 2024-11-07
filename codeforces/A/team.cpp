#include <bits/stdc++.h>

using namespace std;

int check(int a, int b, int c) {
    return (a + b + c) > 1;
}

int main() {
    int n;
    cin >> n;
    int countSolution = 0;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if (check(a, b, c)) { 
            countSolution ++;
        }
    }
    cout << countSolution;
    return 0;
}