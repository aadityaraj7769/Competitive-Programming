#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int a = 1, b= 1;
    if(z % x == 0){
        a = 0;
    }
    if(z % y == 0){
        b = 0;
    }
    if(a == 0 && b==0){
        cout << "ANY" << endl;
    }
    else if(a == 0){
        cout << "CHICKEN" << endl;
    }
    else if(b == 0){
        cout << "DUCK" << endl;
    }
    else{
        cout << "NONE" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}