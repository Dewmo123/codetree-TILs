#include <iostream>
using namespace std;
int sum(int n){
    return sum(n-1)+n
}
int main() {
    int n;
    cin>>n;
    n = sum(n);
    cout<<n;
    return 0;
}