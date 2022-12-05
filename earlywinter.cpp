#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,dm,a,result=0;
    bool inloop = false;
    bool itsnowed = true;
    cin >> n >> dm;
    for(int i = 0;i<n;i++){
        cin >> a;
        if(a>dm){
            result++;
            inloop = true;
        } else break;
        if(i == n-1){
            itsnowed = false;
        }
    }
    if(!itsnowed){
        cout << "It had never snowed this early!";
    } else
    {
        cout << "It hadn't snowed this early in " << result << " years!";
    }
}
