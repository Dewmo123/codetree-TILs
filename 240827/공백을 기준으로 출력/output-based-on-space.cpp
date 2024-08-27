#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, s2;
    getline(cin, s);
    getline(cin, s2);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
    cout << s << s2;
    return 0;
}