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

// unordered_map<char, int> u;

void solve()
{
    string s;
    cin >> s;
    int n = s.length(), k = abs(s[n-1] - s[0]);
    
    vector<pair<char,int>> vp;
    rep(i,0,n)
    {
        vp.pb({s[i], i+1});
    }
    sort(vp);
    vi v;
    v.pb(1);
    for(auto val : vp)
    {
        if(val.second == 1 || val.second == n) continue;
        if((val.first >= s[0] and val.first <= s[n-1]) || (val.first <= s[0] and val.first >= s[n-1]))
        {
            v.pb(val.second);
        }
    }
    v.pb(n);
    if(s[0] > s[n-1])
    {
        reverse(v.begin() + 1, v.end()-1);
    }
    cout << k << " " << v.size() << endl;
    rep(i,0,v.size())
    {
        cout << v[i] << " " ;
    }
    cout << endl;

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