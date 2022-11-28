#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    int m1,m2;
    cin >> a >> b >> c;
    m1 = a-b;
    m2 = b-c;
    if(m1==m2){
        cout << "cruised";
    } else if(m1*m2 < 0){
        cout << "turned";
    } else if(abs(m2)>abs(m1) ){
        cout << "accelerated";
    } else if(abs(m1)>abs(m2)){
        cout << "braked";
    }
}

