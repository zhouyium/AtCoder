//https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_a
//HHKB Programming Contest 2020
//A - Keyboard

#include <iostream>

using namespace std;

int main() {
    char s;
    char ch;
    cin>>s>>ch;

    if ('Y'==s) {
        cout<<(char)(ch-32);
    } else {
        cout<<ch;
    }
    cout<<"\n";
    
    return 0;
}