#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p,q;
    cin >> n >> p >> q;
    int rounds = (p+q)/n;
    if(rounds%2 == 1){
        cout << "opponent";
    } else {
        cout << "paul";
    }
}
