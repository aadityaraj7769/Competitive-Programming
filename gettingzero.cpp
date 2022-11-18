#include<bits/stdc++.h>
using namespace std;
#define inf 32768

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for(int i = 0; i<n; i++)
    {
        int ct = 0;
        /*if(a[i] > inf)
        {
            a[i] = a[i]%inf;
            ct++;
        }*/
        int m = inf-a[i];
       if(m < 16)
       {
           b[i] = m;
       }else{
       
       
       if(a[i] % 2 != 0)
       {
           a[i]++;
           ct++;
           int k = a[i], l = 0, z = 32768;
           while(k % z == 0)
           {
               k = k/2;
               l++;
           }
           ct += 15-l;
       }else{
           int k = a[i], l = 0;
           while(k % 2 == 0)
           {
               k = k/2;
               l++;
           }
           ct += 15-l;
       }
       b[i] = ct;
       }
       
    }
    for(int i = 0; i<n; i++) {
        cout << b[i];
        if(i != n-1) cout << " ";
    }

}

int main()
{
    solve();

    return 0;
}