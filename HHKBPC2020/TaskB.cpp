//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_b
//HHKB Programming Contest 2020
//B - Futon
#include <iostream>
using namespace std;

const int MAXH=1e2+4;
const int MAXW=1e2+4;
char sz[MAXH][MAXW];

int main() {
    int h,w;
    cin>>h>>w;
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            cin>>sz[i][j];
        }
    }

    int ans=0;
    //行查找
    for (int i=1; i<=h; i++) {
        for (int j=2; j<=w; j++) {
            if ('.'==sz[i][j] && sz[i][j-1]==sz[i][j]) {
                ans++;
            }
        }
    }
    //列查找
    for (int i=1; i<=w; i++) {
        for (int j=2; j<=h; j++) {
            if ('.'==sz[j][i] && sz[j-1][i]==sz[j][i]) {
                ans++;
            }
        }
    }

    cout<<ans<<"\n";

    return 0;
}