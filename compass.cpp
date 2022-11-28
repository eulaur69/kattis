#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    int d1,d2;
    bool clockwise = 0;
    cin >> a >> b;
    if(a>b){
        d1 = a-b;
        d2 = 360-d1;
        if(abs(d1) == abs(d2)){
            cout << abs(d1);
        } else
        if(d1<d2){
            cout << -d1;
        } else cout << d2;
    } else {
        d1 = b-a;
        d2 = 360-d1;
        if(abs(d1) == abs(d2)){
            cout << abs(d1);
        } else
        if(d1<d2){
            cout << d1;
        } else cout << -d2;
    }
}


