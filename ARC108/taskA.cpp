//https://atcoder.jp/contests/arc108/tasks/arc108_a
//A - Sum and Product
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double s,p;
    cin>>s>>p;
    //n+m=s  m=s-n
    //n*m=p  n*(s-n)=p -n^2+s*n-p=0; n^2-s*n+p=0
    //需要有两个正整数跟，根据韦达定理, b^2-4ac，也就是
    //s*s-4*1*p=s*s+4*p>0
    double delta=s*s-4*p;
    if (delta<0) {
        //虚数根
        cout<<"No\n";
    } else if (0==delta) {
        //相同根
        cout<<"Yes\n";
    } else {
        //计算出根
        double x=(s+sqrt(delta))/2;
        double y=(s-sqrt(delta))/2;
        if (y>0 && x+y==s && x*y==p) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
    }

    return 0;
}