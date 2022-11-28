#include <bits/stdc++.h>

using namespace std;

int main(){
    int h,m;
    cin >> h >> m;
    if(m-45 >= 0){
        cout << h << " " << m-45;
    } else {
        h = h - 1;
        if(h == -1){
            h = 23;
        }
        m = 60 - abs(45-m);
        cout << h << " " << m;
    }
}
