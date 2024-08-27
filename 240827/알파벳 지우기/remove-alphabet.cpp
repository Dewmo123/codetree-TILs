#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, s2;
	string s3;
	cin >> s >> s2;
	for (int i = 0;i < 8;i++) {
		int n = 0;
		bool flag = false;
		if (i < s.size()) {
			if (s[i] - '0' >= 0 && s[i] - '0' <= 9) {
				flag = true;
				n += s[i] - '0';
			}
		}
		if (i < s2.size()) {
			if (s2[i] - '0' >= 0 && s2[i] - '0' <= 9) {
				flag = true;
				n += s2[i] - '0';
			}
		}
		if (flag)
			s3 += n + '0';
	}
	cout << s3;
	return 0;
}