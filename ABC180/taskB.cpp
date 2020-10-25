//https://atcoder.jp/contests/abc180/tasks/abc180_b
//B - Various distances
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;

    long long ans_m=0;//Manhattan distance
    double ans_e=0;//Euclidian distance;
    long long ans_c=-1e6;//Chebyshev distance
    long long t;
    for (int i=1; i<=n; i++) {
        cin>>t;
        t=abs(t);
        ans_m = ans_m+t;
        ans_e = ans_e+t*t;
        ans_c = max(t, ans_c);
    }

    cout<<ans_m<<"\n";
    printf("%.15lf\n", sqrt(ans_e));
    cout<<ans_c<<"\n";

    return 0;
}