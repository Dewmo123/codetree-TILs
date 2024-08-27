#include <iostream>
#include<string>
using namespace std;

int main() {
    string s, s2;
    cin >> s >> s2;
    int n = 0;
    for (int i = 0;i < s.size();i++) {
        if (s[i] == s2[0]) break;
        n++;
    }
    for (int i = 0;i < n;i++) {
        char flag = s[0];
        for (int i = 1;i < s.size();i++) {
            s[i - 1] = s[i];
        }
        s[s.size() - 1] = flag;
    }
    if (s != s2)cout << -1;
    else cout << n;
    return 0;
}