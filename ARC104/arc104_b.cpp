//https://atcoder.jp/contests/arc104/tasks/arc104_b

/*
A和T是互补
C和G是互补
只要满足：
A的数量和T的数量相同
C的数量和G的数量相同
暴力遍历数据即可，时间复杂度为O(N^2)
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string str;
    cin>>n>>str;

    //暴力
    int ans=0;
    for (int i=0; i<n; i++) {
        int a=0;//字母A的数量
        int c=0;//字母c的数量
        for (int j=i; j<n; j++) {
            if ('A'==str[j]) {
                a++;
            } else if ('T'==str[j]) {
                a--;
            } else if ('C'==str[j]) {
                c++;
            } else if ('G'==str[j]) {
                c--;
            }

            if (0==a && 0==c) {
                ans++;
            }
        }
    }

    cout<<ans<<"\n";

    return 0;
}