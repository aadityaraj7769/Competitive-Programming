#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, B, x, y;
        cin >> n >> B >> x >> y;
        vector<long long> v(n+1);
        long long i = 0;
        v[i] = 0;
        i++;
        while(i != n+1)
        {
            if(v[i-1] + x <= B)
            {
                v[i] = v[i-1] + x;
            }else{
                v[i] = v[i-1] - y;
            }
            i++;
        }
        // for(int l = 0; l<n; l++) cout << v[l] << " " << endl;
        //long long sum = accumulate(v.begin(), v.end(),0);
        long long sum = 0;
        for(int i = 0; i<n+1; i++) sum = sum + v[i];
        cout << sum << endl;

    }

    return 0;
}