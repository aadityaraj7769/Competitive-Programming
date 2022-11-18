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
    int n, d;
    cin >> n >> d;
    vi v(n);
    rep(i,0,n) cin >> v[i];
    if(n == 1)
    {
        int ans = d/v[0] + 1;
        if(ans > 1){
            cout << 0 << endl;
        }
        else 
            cout << 1 << endl;
        return;
    }
    sort(v);
    int i = 0, j = n-1;
    // ct++;
    int ct = 0;
    while(i <= j)
    {
        int k = d/v[j] + 1;
        // j--;
        i += k-1;
        if(i <= j)
            ct++;
        j--;
    }
    cout << ct << endl;
    return;
}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}