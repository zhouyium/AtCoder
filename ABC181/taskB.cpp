    //https://atcoder.jp/contests/abc181/tasks/abc181_b
    //B - Trapezoid Sum
    //d=1的等差数列求和
    #include <iostream>
    using namespace std;
    int main() {
        int n;
        cin>>n;
        long long ans=0;
        while (n--) {
            long long a,b;
            cin>>a>>b;
            long long tot=b-a+1;
            ans+=(a*tot+tot*(tot-1)/2);
        }
     
        cout<<ans<<"\n";
        return 0;
    }