#include <bits/stdc++.h>
using namespace std;
int compare(string s1, string s2) { 
    int i = 0, j = 0;
    while (i < s1.length()) { 
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
        if (s1[i] < s2[i])  
            return -1;
        else if (s1[i] > s2[i])
            return 1;
        ++i; ++j;
    }
    return 0;
}
int main() { 
    string s1, s2;
    cin >> s1 >> s2;
    cout << compare(s1, s2);
    return 0; 
}