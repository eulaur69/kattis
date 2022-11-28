#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,v,h,v_left,h_left, t = 4;
    int volume1;
    int volume2;
    int volume3;
    int volume4;
    int mx = -1;
    cin >> n >> h >> v;
    volume1 = h*v*t;
    if(mx < volume1){
        mx = volume1;
    }
    v_left = n - v;
    h_left = n - h;
    volume2 = v_left*h_left*t;
    if(mx < volume2){
        mx = volume2;
    }
    volume3 = v_left*h*t;
    if(mx < volume3){
        mx = volume3;
    }
    volume4 = v*h_left*t;
    if(mx < volume4){
        mx = volume4;
    }
    cout << mx;
}
