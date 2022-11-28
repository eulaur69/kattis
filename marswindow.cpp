#include <bits/stdc++.h>

using namespace std;

int main(){
    int year;
    cin >> year;
    //for(int i = 2018;i<=3000;i++){
        //cout << "input y" << i;
        int start_mo = 2018*12+3;
        int end_mo = year*12;
        while(start_mo<end_mo){
            start_mo += 26;
        }
        //cout << "output y "<< start_mo/12 << endl << endl;
        if(start_mo/12 == year){
            cout << "yes";
        } else cout << "no";
    //}
}
