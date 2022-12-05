#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 1,b,c;
    while(cin >> a >> b >> c){
        if(a == 0){
            return 0;
        }
        if(a*a + b*b == c*c || b*b+c*c==a*a || a*a+c*c==b*b){
            cout << "right" << endl;
        } else cout << "wrong" << endl;
    }
}
