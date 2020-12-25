//https://atcoder.jp/contests/abc186/tasks/abc186_e
//E - Throne
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

typedef long long ll;

ll reduce(ll a, ll mod) {
    return (a%=mod)<0?a+mod:a;
}

//finds x, y such that ax + by = gcd(a, b)
ll euclidEx(ll a, ll b, ll &x, ll &y) {
    if (b) {
        ll d=euclidEx(b, a%b, y, x);
        y-=a/b*x;
        return d;
    } else {
        x=1;
        y=0;
        return a;
    }
}

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    int t;
    cin>>t;
    
    while (t--) {
        ll n,s,k;
        cin>>n>>s>>k;

        s=n-s;
        ll g=__gcd(n, k);
        if (0!=s%g) {
            cout<<"-1\n";
            continue;
        }

        //找到最小的正整数x，满足 kx=s mod n
        ll x,y;
        euclidEx(k, n, x, y);
        //kx+ny=g
        x *= (s/g);
        y *= (s/g);
        //ans is x%(n/g)
        x = reduce(x, n/g);
        cout<<x<<"\n";
    }

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}