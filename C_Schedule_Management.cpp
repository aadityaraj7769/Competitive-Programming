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
    vi v(m), w;
    unordered_set<int> u;
    rep(i,0,m)
    {
        cin >> v[i];
        u.insert(v[i]);
        // w[v[i]]++;
    }
    if(u.size() == m){
        cout << 1 << endl;
        return;
    }
    if(u.size() == 1)
    {
        int ans = 0;
        if(m % 3 == 0)
        {
            ans += 2*(m/3);
        }
        else if(m% 3 == 1)
        {
            ans += 2*(m/3)+1; 
        }else{
            ans += 2*(m/3)+2;
        }
        cout << ans << endl;
        return;
    }
    sort(v);
    int ct = 1;
    rep(i,0,m-1)
    {
        if(v[i]==v[i+1]){
            ct++;
        }else{
            w.pb(ct);
            ct = 1;
        }
    }
    w.pb(ct);
    int f = n;
    int sz = w.size();
    int i = 0, j = sz-1;
    sort(w);
    // rep(i,0,sz)
    // {
    //     cout << w[i] << " ";
    // }
    // cout << endl;
    
    while(i < j )
    {
        int k = (w[j]-w[i])/3;
        w[j] = w[j]-k;
        w[i] = w[i] + 2*k;
        if(k == 0) i++;
        else j--;
        // if(k > 0) f--;
    }
        int ans = *max_element(all(w));
        cout << ans << endl;
        // cout << endl;

    
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