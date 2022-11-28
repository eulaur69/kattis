#include <bits/stdc++.h>

using namespace std;

int main(){
    int mb,n,x,sum=0;
    cin >> mb;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x;
        sum = sum + mb-x;
    }
    cout << sum+mb;
    return 0;
}


