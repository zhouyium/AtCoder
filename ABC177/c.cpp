    //https://atcoder.jp/contests/abc177/tasks/abc177_c
    //C - Sum of product of pairs
    #include <iostream>
    using namespace std;
     
    const int MAXN = 2e5+4;
    unsigned long long a[MAXN];
    unsigned long long qz[MAXN];//前缀和
    const int MO = 1e9+7;
     
    int main() {
        int n;
        cin>>n;
        for (int i=1; i<=n; i++) {
            cin>>a[i];
            qz[i]=qz[i-1]+a[i];
        }
     
        unsigned long long ans=0;
        for (int i=1; i<=n; i++) {
    #if 1
            ans += (a[i]%MO)*((qz[n]-qz[i])%MO);
            ans %= MO;
    #else
            for (int j=i+1; j<=n; j++) {
                ans += (a[i]*a[j])%MO;
                ans %= MO;
            }
    #endif
        }
     
        cout<<ans<<"\n";
     
        return 0;
    }