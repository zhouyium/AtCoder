#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const LL MO=1e9+7;

LL qmi(LL a,LL b) {
    LL res=1;
    while(b) {
        if (b&1) {
            res=res*a%MO;
        }
        a=a*a%MO;
        b>>=1;
    }
    return res;
}

int main() {
    LL n;
    cin>>n;

    cout<<((qmi(10ll,n)-2*qmi(9ll,n)+qmi(8ll,n))%MO+MO)%MO<<"\n";

    return 0;
}
