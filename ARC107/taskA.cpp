//https://atcoder.jp/contests/arc107/tasks/arc107_a
//A - Simple Math
#include <bits/stdc++.h>

using namespace std;

const long long MO=998244353;

int main() {
    long long a,b,c;
    cin>>a>>b>>c;
    long long t0=a*(a+1)/2;
    long long t1=b*(b+1)/2;
    long long t2=c*(c+1)/2;
    long long ans=((t0%MO)*(t1%MO))%MO;
    ans=((ans%MO)*(t2%MO))%MO;
    cout<<ans<<"\n";
    return 0;
}