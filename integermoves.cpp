#include <bits/stdc++.h>
using namespace std;

void solve(int x , int y)
{
    if(x == 0 && y == 0) {
        cout << "0" << endl;
        return;
    }
    int a = x*x + y*y;
    int k = sqrt(a);
    if(a == k*k) {
        cout << "1" << endl;
        return;
    }else{
        cout << "2" << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        solve(x , y);
        
       
    }

    return 0;
}