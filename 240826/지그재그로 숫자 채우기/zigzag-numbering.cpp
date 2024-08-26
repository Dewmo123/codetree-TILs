#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int** arr = new int*[n];
    for (int i = 0;i < n;i++)
        arr[i] = new int[m];
    //0,0 1,0 2,0 3,0 3,1 2,1 1,1 0,1 0,2
    int cnt = 0;
    for (int y = 0;y < m;y++) {
        if (y % 2 == 0) {
            for (int x = 0;x < n;x++) {
                arr[x][y] = cnt++;
            }
        }
        else {
            for (int x = n - 1;x >= 0;x--) {
                arr[x][y] = cnt++;
            }
        }
    }
    for (int y = 0;y < n;y++) {
        for (int x = 0;x < m;x++) {
            cout << arr[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}