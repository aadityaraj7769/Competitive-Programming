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
        vector<int> a(n-1);
        for(int i = 0; i<n-1; i++) cin >> a[i];
        int sum = accumulate(a.begin(), a.end(),0);
        int avg = sum/(n-1);
        if(avg >= x) cout << "0" << endl;
        else{
            int y = x*(n)-sum;
            cout << y << endl;
        }
    }
    

    return 0;
}