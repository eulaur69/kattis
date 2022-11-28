#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    int participant = 0;
    int mx = -1;
    int sum;
    for(int i = 0;i<5;i++){
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;
        if(mx < sum){
            participant = i+1;
            mx = sum;
        }
    }
    cout << participant << " " << mx;
}
