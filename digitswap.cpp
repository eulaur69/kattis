#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int output = n%10;
    n = n / 10;
    output = output*10+n;
    cout << output;
}
