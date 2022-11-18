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
    vi v(n), w(n);
    rep(i,0,n) cin >> v[i];
    rep(i,0,n) cin >> w[i];
    int k = 0;
    int c1 = 0, r1 = 0, c2 = 0, r2 = 0;
    rep(i,0,n)
    {
        if(v[i] != w[i]) k++;
        if(v[i] == 0) c1++;
        if(v[i] == 1) r1++;
        if(w[i] == 0) c2++;
        if(w[i] == 1) r2++;
    }
    if(k == 0) {
        cout << 0 << endl;
        return;
    }
    if(c1 == c2){
        cout << 1 << endl;
        return;
    }
    int m1 = max(c1,c2);
    int m2 = min(c1,c2);
    int z1 = max(r1,r2);
    int z2 = min(r1,r2);
    // cout << k << endl;
    if(k == m1-m2 || k == z1-z2)
    {
        cout << k << endl;
        return;
    }else{
        cout << m1-m2+1 << endl;
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