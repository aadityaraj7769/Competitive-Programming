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
    int n;
    cin >> n;
    vi v(n);
    unordered_map<int,int> u;
    vi w;
    rep(i,0,n)
    {
        int k;
        cin >> k;
        v[i] = k%10;
        if(u[v[i]] < 3)
        {
            u[v[i]]++;
            w.pb(v[i]);
        }
    }
    
    bool ans = false;
    int h = w.size();
    rep(i,0,h)
    {
        rep(j,i+1, h)
        {
            rep(l, j+1, h)
            {
                if((w[i]+w[j]+w[l])%10 == 3)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }

    }
    cout << "NO" << endl;
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