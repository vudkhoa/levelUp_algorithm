#include <bits/stdc++.h>
using namespace std;
int main() { 

    int x;
    int coordinates_x = 0;
    int coordinates_y = 0;
    for (int i = 0; i < 5; ++i) { 
        for (int j = 0; j < 5; ++j) { 
            cin >> x;
            if (x == 1) {
                coordinates_x = i;
                coordinates_y = j;
            }
        }
    }

    cout << abs(coordinates_x - 2) + abs(coordinates_y - 2);
    return 0;
}