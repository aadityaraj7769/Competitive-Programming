#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int g = n/2;
        for(int i = 0; i<n-1; i++) {

            v[i] = -g;
            g++;
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        int y = x*n-sum;
        if(y >= 1 && y<=n)
        {
            v[n-1] = y+v[n-2];
            v[0] = v[0] - v[n-2];
        }else{
        v[n-1] = y;}
        for(int i = 0; i<n; i++) {
            cout << v[i];
            if(i != n-1){
                cout << " ";
            }
        }
        cout << endl;
        // cout << y << endl;
        
    }
    

    return 0;
}