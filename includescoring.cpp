#include <bits/stdc++.h>

using namespace std;

struct stats{
    int s;
    int p;
    int f;
    int o;
};

int main(){
    int scores[30] = {100,75,60,50,45,40,36,32,29,26,24,22,20,18,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    stats a[1000];
    int n;
    int ranks[1000];
    int rk = 1;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a[i].s >> a[i].p >> a[i].f >> a[i].o;
    }
    ranks[0] = rk;
    for(int i = 1;i<n;i++){
        if(a[i-1].s == a[i].s && a[i-1].p == a[i].p && a[i-1].f == a[i].f){
            ranks[i] = rk;
        } else {
            rk++;
            ranks[i] = rk;
        }
    }
    int current_rank = 1;
    int freq = 1;
    int score = 0;
    int output[1000];
    int k = 0;
    for(int i = 0;i<n-1;i++){
        if(ranks[i] == ranks[i+1]){
            freq++;
        } else {
            for(int j = 0;j<freq;j++){
              score = score + scores[current_rank+j];
            }
            score = ceil(score / freq);
            for(int ii = 0;ii<freq;ii++){
                output[k] = score;
                k++;
            }
            score = 0;
            freq = 0;
        }
    }
    for(int i = 0;i<n;i++){
        cout << output[i] << endl;
    }
}
