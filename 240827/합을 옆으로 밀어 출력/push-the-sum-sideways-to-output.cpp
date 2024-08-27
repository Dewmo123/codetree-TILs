#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0;i < n;i++) {
		int m;
		cin >> m;
		sum += m;
	}
	string s = to_string(sum);
	char flag = s[0];
	for (int i = 1;i < s.size();i++) {
		s[i - 1] = s[i];
	}
	s[s.size() - 1] = flag;
	cout << s;
	return 0;
}