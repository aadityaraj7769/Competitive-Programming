#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        long long pos = 0, neg = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i] > 0)
            {
                pos++;
            }else if(v[i] < 0)
            {
                neg++;
            }
        }
        long long x = ((pos)*(pos-1)/2) + (((neg)*(neg-1))/2);
        cout << x << endl;
    }
    

    return 0;
}