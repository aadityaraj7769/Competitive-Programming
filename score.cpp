#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > c || b > d) {
            cout << "IMPOSSIBLE" << endl;
        }
        else{
            cout << "POSSIBLE" << endl;
        }
    }
    

    return 0;
}