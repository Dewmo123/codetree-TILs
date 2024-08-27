#include <iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s = to_string(n);
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    cout<<sum;
    return 0;
}