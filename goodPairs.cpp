#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        int a = INT_MAX, b = INT_MIN, c = 0, d= 0;
        for(int i = 0; i<n; i++)
        {
            if(a > v[i])
            {
                a = v[i];
                c = i;
            }
            if(b < v[i])
            {
                b = v[i];
                d = i;
            }
        }
        cout << c+1 << " " << d+1 << endl;
    }

    return 0;
}