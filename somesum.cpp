#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 2){
        cout << "Odd";
    } else if(n%2 == 0){
        if(n/2%2 == 0){
            cout << "Even";
        } else cout << "Odd";
    } else cout << "Either";
}
