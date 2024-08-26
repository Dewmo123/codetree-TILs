#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int**arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++)
        arr[0][i]=arr[i][0] = 1;
    for(int y=1;y<n;y++){
        for(int x=1;x<n;x++){
            arr[y][x] = arr[y][x-1]+arr[y-1][x]+arr[y-1][x-1];
        }
    }
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            cout<<arr[y][x]<<" ";
        }
        cout<<endl;
    }
    return 0;
}