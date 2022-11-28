#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(n<m){
        cout << "Dr. Chaz will have " << abs(n-m);
        if(abs(n-m)==1){
            cout << " piece ";
        } else {
            cout << " pieces ";
        }
        cout << "of chicken left over!";
    } else {
        cout << "Dr. Chaz needs " << abs(n-m) << " more";
        if(abs(n-m)==1){
            cout << " piece ";
        } else {
            cout << " pieces ";
        }
        cout << "of chicken!";
    }
}
