#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    int double_x = -1;
    int double_y = -1;
    int x_result;
    int y_result;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    if(x1==x2){
        double_x = x1;
    }
    if(y1==y2){
        double_y = y1;
    }
    cin >> x3 >> y3;
    if(x2==x3){
        double_x = x2;
    }
    if(y2==y3){
        double_y = y2;
    }
    if(x3==x1){
        double_x = x3;
    }
    if(y3==y1){
        double_y=y3;
    }
    if(x1 == x2 && x2 == double_x){
        x_result = x3;
    } else if(x1==x3 && x3==double_x){
        x_result = x2;
    } else {
        x_result = x1;
    };
    if(y1 == y2 && y2== double_y){
        y_result = y3;
    } else if(y1==y3 && y3==double_y){
        y_result = y2;
    } else {
        y_result = y1;
    };
    //cout << "DOUBLE : " << double_x << " " << double_y << endl;
    cout << x_result << " " << y_result;
}
