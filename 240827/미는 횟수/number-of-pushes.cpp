#include <iostream>
#include<string>
using namespace std;

int main() {
	string s, s2;
	cin >> s >> s2;
	int n = 0;
	while (true)
	{
		if (s == s2)break;
		if (n > s.size()) {
			n = -1;
			break;
		}
		char flag = s[s.size()-1];
		char flag2 = s[0];
		for (int i = 0;i < s.size()-1;i++) {
			char cha = s[i + 1];
 			s[i+1] = flag2;
			flag2 = cha;
		}
		n++;
		s[0] = flag;
	}
	if (s != s2)cout << -1;
	else cout << n;
	return 0;
}