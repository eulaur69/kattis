#include <bits/stdc++.h>

using namespace std;

int reverse_number(int n){
    int ogl = 0;
    while(n>0){
        ogl = ogl*10 + n % 10;
        n = n / 10;
    }
    return ogl;
}

int main(){
    int a,b;
    cin >> a >> b;
    a = reverse_number(a);
    b = reverse_number(b);
    if(a>b){
        cout << a;
    } else cout << b;
}
