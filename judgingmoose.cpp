#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,r,mx;
    cin >> l >> r;
    mx = l;
    if(l == 0 && r == 0){
        cout << "Not a moose";
        return 0;
    }
    if(l != r){
        cout << "Odd ";
        if(l>r){
            mx = l;
        } else mx = r;
    } else {
        cout << "Even ";
    }
    cout << mx*2;
}
