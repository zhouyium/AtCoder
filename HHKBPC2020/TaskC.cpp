//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
//HHKB Programming Contest 2020
//C - Neq Min
//使用最小堆
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin>>n;

    //定义一个最小堆
    map<int, int> myMap;
    int minx=2e5+4;
    int maxx=-1;

    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;

        myMap[x]++;
        maxx=max(maxx, x);
        minx=min(minx, x);

        //输出
        if (minx>0) {
            cout<<minx-1;
        } else if (i>maxx) {
            cout<<maxx+1;
        } else {
            
        }
        cout<<"\n";
    }

    return 0;
}