#include <bits/stdc++.h>

using namespace std;

int main(){
    int b,k,g;
    cin >> b >> k >> g;
    int k_per_g = k/g;
    b = b - 1;
    if(b % k_per_g != 0){
        cout << b/k_per_g+1;
    } else cout << b/k_per_g;
}
