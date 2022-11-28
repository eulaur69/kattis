#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        if(a%2 == 0){
            cout << a << " is even" << endl;;
        } else {
            cout << a << " is odd" << endl;
        }
    }
}
