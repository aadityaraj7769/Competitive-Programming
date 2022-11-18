#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long k = pow(2,n);
        cout << k-1 << endl;
    }

    return 0;
}