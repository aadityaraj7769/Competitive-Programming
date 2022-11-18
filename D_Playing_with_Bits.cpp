#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vi vector<int>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define sort(x) sort(x.begin(), x.end())
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define rep(i,a,b) for(int i=a; i<b; i++) 
#define even(x)  x % 2 == 0 
#define odd(x)  x % 2 != 0 


// Constants
const long long MOD = 1e9 + 7;
const long N = 2e5 + 7;
const long long llmax = LONG_LONG_MAX;

// int arr[N][32];

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n][31];
    rep(i,0,n)
    {
        rep(j,0,31)
        {
            arr[i][j] = 0;
        }
    }
    int ans[31];
    vi v(n);
    rep(i,0,n)
    {
        cin >> v[i];
        int j = 0;
        int l = v[i];
        while(l != 0)
        {
            if(l&1)
            {
                arr[i][j] = 1;
            }else{
                arr[i][j] = 0;
            }
            j++;
            l /= 2;
        }
    }
    // rep(i,0,n)
    // {
    //     rep(j,0,32)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int g[31];
    rep(i,0,31) g[i] = 0;
    rep(i,0,31) ans[i] = 0;
    rep(i,0,31)
    {
        int ct = 0;
        rep(j,0,n)
        {
            if(arr[j][i] == 0) ct++;
        }
        g[i] = ct;
    }
    // rep(i,0,32)
    // {
    //     cout << g[i] << " ";
    // }
    // cout << endl;
    for(int i = 30; i>=0; i--)
    {
        if(k < 0) continue;
        
        if(g[i] <= k)
        {
            ans[i] = 1;
            k = k-g[i];
        }
    }
    ll an = 0;
    int t = 0;
    rep(i,0,31)
    {
        an += ans[i]*pow(2,t);
        t++;
    }
    // int u = pow(2,31)-pow(2,16);
    // cout << u << endl;
    // if(n == 1)
    // {
    //     cout << an/2 << endl;
    //     return;
    // }
    
    cout << an << endl;
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