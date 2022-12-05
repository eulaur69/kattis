#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,k,d,s;
    cin >> n >> k >> d >> s;
    long long rem_sum = d*n-s*k;
    cout << fixed << setprecision(9);
    double result = (double)rem_sum/(n-k);
    if(result > 100 || result < 0){
        cout << "impossible";
    }else if(d*n-s*k > 100 * (n-k)){
        cout << "impossible";
    }else cout << result;
}
