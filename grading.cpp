#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e;
    int n;
    cin >> a >> b >> c >> d >> e >> n;
    if(n < e){
        cout << "F";
    } else if(n < d){
        cout << "E";
    } else if(n < c){
        cout << "D";
    } else if(n < b){
        cout << "C";
    } else if(n < a){
        cout << "B";
    } else cout << "A";
}

