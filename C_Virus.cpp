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
    cin >> m >> n;
    vi v(n);
    rep(i,0,n){
        cin >> v[i];
    }
    vector<int> w;
    rep(i,0,n-1)
    {
        w.pb(abs(v[i]-v[i+1])-1);
    }
    int k = m-v[n-1];
    k += v[0]-1;
    w.pb(k);
    sort(w);
    ll ct = 0, l = 2;
    for(int i = w.size()-1; i>0; )
    {
        if(w[i] <= 0) {
            break;
        }
        ct += w[i]-1;
        w[i-1]-=l;
        l+=2;
        i--;
    }
    cout << ct << endl;
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