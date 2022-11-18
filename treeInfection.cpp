#include<bits/stdc++.h>
using namespace std;

struct item{
    int vert, par, ct;
};
typedef struct item data; 

void solve()
{
int n;
        cin >> n;
        data A[n];
        A[0].vert = 1;
        A[0].par = -1;
        A[0].ct = -1;
        for(int i = 1; i<n; i++)
        {
            int k;
            cin >> k;
            A[0].vert = i+1;
            A[0].par = k;
            A[0].ct = -1;
        }
        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        

    }
    

    return 0;
}