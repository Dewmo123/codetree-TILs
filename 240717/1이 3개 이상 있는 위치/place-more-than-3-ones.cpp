#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt = 0;
    bool flag = false;
    cin>>n;
    int arr[n][n];
    int dy[4] = {0,0,-1,1};
    int dx[4] = {1,-1,0,0};
    for(int y=0;y<n;y++)
        for(int x=0;x<n;x++)
            cin>>arr[y][x];
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            flag = false;
            int y1,x1;
            for(int i=0;i<4;i++){
                y1=dy[i]+y;
                x1=dx[i]+x;
                if(y1>=n||x1>=n)continue;
                if(arr[dy[i]+y][dx[i]+x]==0)flag = true;
            }
            if(!flag)
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}