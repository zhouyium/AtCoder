//https://atcoder.jp/contests/agc048/tasks/agc048_c
//C - Penguin Skating
#include <bits/stdc++.h>

using namespace std;

const int MAXN=7;//1e5+4;
long long a[MAXN];
long long b[MAXN];

int main() {
    int n, l;
    cin>>n>>l;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    a[n+1]=l+1;
    for (int i=1; i<=n; i++) {
        cin>>b[i];
    }
    b[n+1]=l+1;

    //差分
    for (int i=n+1; i>=1; i--) {
        a[i]=a[i]-a[i-1]-1;
        b[i]=b[i]-b[i-1]-1;
    }

    long long ans=0;
    long long j=1, st=1;
#if 0
    for(int i=1;i<=n+1;++i){
        if(!b[i]) continue;
        while(!a[j]) ++j;st=j;
        long long cur=0; 
        while(cur<b[i]&&j<=n+1) cur+=a[j++];
        if(cur!=b[i]) {puts("-1");return 0;}
        ans+=max(0ll,j-1-i)+max(0ll,i-st);
    }
#else    
    for (int i=1; i<=n+1; i++) {
        if (!b[i]) {
            continue;
        }

        while (!a[j]) {
            j++;
        }
        st=j;

        long long cur=0;
        while (cur<b[i] && j<=n+1) {
            cur+=a[j];
            j++;
        }
        if (cur!=b[i]) {
            cout<<"-1\n";
            return 0;
        }

        ans+=(max(0ll, j-1-i)+max(0ll, i-st));
    }
#endif

    cout<<ans<<"\n";

    return 0;
}