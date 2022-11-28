#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int number = 3;
    cin >> n;
    for(int i = 2;i<=n;i++){
        number = number + number - 1;
    }
    cout << number*number;
}
