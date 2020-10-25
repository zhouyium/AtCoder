//https://atcoder.jp/contests/arc106/tasks/arc106_a
//A - 106
/*
实在想不出什么好办法，只好暴力枚举。
时间复杂度O(log_{3}{N}*log_{5}{N})
 */
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    for (long long i=3, ans0=1; i<=n; i*=3, ans0++) {
        for (long long j=5, ans1=1; j<=n; j*=5, ans1++) {
            if (i+j==n) {
                cout<<ans0<<' '<<ans1<<'\n';
                return 0;
            }
        }
    }
    cout<<"-1\n";
    return 0;
}