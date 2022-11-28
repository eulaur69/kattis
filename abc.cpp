#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b,c,aux;
    cin >> a >> b;
    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }
    cin >> c;
    if(b > c){
        aux = b;
        b = c;
        c = aux;
    }
    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }
    string order;
    cin >> order;
    if(order == "ABC"){
        cout << a << " " << b << " " << c;
    } else if(order == "ACB"){
        cout << a << " " << c << " " << b;
    } else if(order == "BAC"){
        cout << b << " " << a << " " << c;
    } else if(order == "BCA"){
        cout << b << " " << c << " " << a;
    } else if(order == "CAB"){
        cout << c << " " << a << " " << b;
    } else if(order == "CBA"){
        cout << c << " " << b << " " << a;
    }
}
