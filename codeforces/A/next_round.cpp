#include <bits/stdc++.h>
using namespace std;
int main() { 
    int n, k;
    cin >> n >> k;
    int count = 0;
    int a[100];
    for (int i = 1; i <= n; ++i) { 
        cin >> a[i];
        if (i <= k && a[i] <= 0) break; 
        if (i >= k && a[i] >= a[k] && a[i] && a[i] > 0 || i < k && a[i] > 0) {
            count = i;
        }

    }
    cout << count;
    return 0;
}