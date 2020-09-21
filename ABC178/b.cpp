//https://atcoder.jp/contests/abc178/tasks/abc178_b
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    long long ans;
    ans=max(a*c, a*d);
    ans=max(ans, b*c);
    ans=max(ans, b*d);
    cout<<ans<<"\n";

    return 0;
}