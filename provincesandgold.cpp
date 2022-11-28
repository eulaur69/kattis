#include <bits/stdc++.h>

using namespace std;

int main(){
    int g,s,c;
    int score;
    bool victory = false;
    cin >> g >> s >> c;
    score = c + 2*s + 3*g;
    //victory cards
    if(score >= 8){
        cout << "Province";
        victory = true;
    } else if(score >= 5){
        cout << "Duchy";
        victory = true;
    } else if(score >= 2){
        cout << "Estate";
        victory = true;
    }
    if(victory){
        cout << " or ";
    }
    //treasure cards
    if(score >= 6){
        cout << "Gold";
    } else if(score >= 3){
        cout << "Silver";
    } else{
        cout << "Copper";
    }
}
