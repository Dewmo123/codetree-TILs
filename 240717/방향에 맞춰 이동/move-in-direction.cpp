#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,length;
    cin>>n;
    char dir;
    int y=0,x=0;
    for(int i=0;i<n;i++){
        cin>>dir>>length;
        switch(dir){
            case 'N':
                y+=length;
                break;
            case 'S':
                y-=length;
                break;
            case 'E':
                x+=length;
                break;
            case 'W':
                x-=length;
                break;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}