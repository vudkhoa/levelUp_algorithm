#include <bits/stdc++.h>
using namespace std;

// Hàm QuickSort
void quick_sort(string *a, int l, int r) { 
    int i = l, j = r;
    string x = a[(l + r) / 2]; 
    while (i <= j) { 
        while (a[i] < x) ++i;  
        while (a[j] > x) --j;  
        if (i <= j) { 
            swap(a[i], a[j]);  
            ++i; --j;  
        }
    }
    if (l < j) quick_sort(a, l, j);  
    if (i < r) quick_sort(a, i, r);  
}

int main() {
    string s;
    cin >> s;  

    stringstream ss(s);
    string word;
    string a[101];  
    int dem = 0;  
    while (getline(ss, word, '+')) { 
        a[dem++] = word;  
    }
    
    quick_sort(a, 0, dem - 1);  

    for (int i = 0; i < dem; ++i) { 
        cout << a[i];
        if (i != dem - 1) cout << "+"; 
    }
    
    return 0;
}
