#include <bits/stdc++.h>

using namespace std;

int main(){
    int r,c;
    const float pi = 3.14;
    cin >> r >> c;
    int area1 = r*r;
    int r2 = r-c;
    int area2 = r2*r2;
    if(area2 == 0){
        cout << 0;
    } else{
        float result = (float)area2/area1;
        cout.precision(10);
        cout << result*100;
    }
    //cout << 100/(area1/area2);

}
