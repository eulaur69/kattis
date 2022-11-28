#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,t,f;
    cin >> t >> f;
    f = f - 1;
    int min_c = t*f;
    while((float)min_c/t<=f){
        min_c++;
    }
    cout << min_c;
}
