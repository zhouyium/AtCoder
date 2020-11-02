//https://atcoder.jp/contests/abc177/tasks/abc177_a
//A - Don't be late
#include <bits/stdc++.h>

using namespace std;

int main() {
    int d,t,s;
    cin>>d>>t>>s;
    if (t*s>=d) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }
    return 0;
}