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
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    rep(i,0,n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    int ct = 0;
    int one = 0;
    int k = 0;
    ct += v[0][0] + v[0][1] + v[1][0] + v[1][1];

    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(v[i][j] == '1') one++;
        }
    }

    rep(i,0,n)
    {
        rep(j,0,m-1)
        {
            
            if(v[i][j] == v[i][j+1] and v[i][j] == '0')
            {
                k = 1;
            }
            
            
        }
    }
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            
            if(v[i][j] == v[i+1][j+1] and v[i][j] == '0')
            {
                k = 1;
            }
            
            
        }
    }
    for(int i = 0; i<n-1; i++)
    {
        for(int j = m-1; j>0; j--)
        {
            if(v[i][j] == v[i+1][j-1] and v[i][j] == '0')
            {
                k = 1;
            }
        }
    }
    

    rep(i,0,m)
    {
        rep(j,0,n-1)
        {
            
            if(v[j][i] == v[j+1][i] and v[j][i] == '0')
            {
                k = 1;
            }
            
        }
    }
    if(k == 1)
    {
        cout << one << endl;
    }
    else if(one == m*n){
        cout << one -2 << endl;
    }else{
        cout << one-1 << endl;
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