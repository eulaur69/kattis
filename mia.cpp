#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s0,s1,r0,r1;
    int s,r;
    int aux;
    while(cin >> s0 >> s1 >> r0 >> r1)
    {
        if(s0 == 0)
        {
            break;
        }
        if(s0<s1)
        {
            aux = s0;
            s0 = s1;
            s1 = aux;
        }
        if(r0<r1)
        {
            aux = r0;
            r0 = r1;
            r1 = aux;
        }
        s = s0*10+s1;
        r = r0*10+r1;
        if(s==r)
        {
            cout << "Tie." << endl;
        }
        else if(s == 21)
        {
            cout << "Player 1 wins." << endl;
        }
        else if(r == 21)
        {
            cout << "Player 2 wins." << endl;
        }
        else if(s > r)
        {
            if(r % 11 == 0 && s % 11 !=0)
            {
                cout << "Player 2 wins." << endl;
            }
            else cout << "Player 1 wins." << endl;
        }
        else if(r > s)
        {
            if(s % 11 == 0 && r % 11 != 0)
            {
                cout << "Player 1 wins." << endl;
            } else cout << "Player 2 wins." << endl;
        }
    }
}
