//https://atcoder.jp/contests/abc179/tasks/abc179_c
//C - A x B + C
#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    unsigned long long ans=0;
    for (int a=1; a<n; a++) {
        for (int b=1; b<=n/a; b++) {
            int c=n-a*b;
            if (c>0 && n==a*b+c) {
                ans++;
            }
        }
    }
 
    cout<<ans<<"\n";
 
    return 0;
}