#include <bits/stdc++.h>

using namespace std;



int main(){
    int a,b,c;
    int moves = 0;
    cin >> a >> b >> c;
    int dif1 = abs(a-b);
    int dif2 = abs(b-c);
    /*while(dif1>=2 || dif2>=2){
        if(dif1>=2 && dif1>=dif2){
            moves++;
            c = b;
            b = b + 1;
        } else if(dif2>=2 && dif2>=dif1){
            moves++;
            a = b;
            b = b + 1;
        }
        dif1 = abs(a-b);
        dif2 = abs(b-c);
    }
    cout << moves;*/
    dif1 = abs(a-b);
    dif2 = abs(b-c);
    if(dif1>dif2){
        cout << dif1-1;
    } else cout << dif2-1;
}

