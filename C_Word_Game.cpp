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
    vector<string> v(n), w(n), x(n);
    unordered_map<string, int> a, b, c, m;
    rep(i,0,n)
    {
        string s;
        cin >> s;
        v[i] = s;
        a[s]++;
        m[s]++;
    }
    rep(i,0,n)
    {
        string s;
        cin >> s;
        w[i] = s;
        b[s]++;
        m[s]++;
    }
    rep(i,0,n)
    {
        string s;
        cin >> s;
        x[i] = s;
        c[s]++;
        m[s]++;
    }
    int s1 = 0, s2 = 0, s3 = 0;
    for(auto val : a)
    {
        if(m[val.first] == 1) s1 += 3;
        if(m[val.first] == 2) s1 += 1;
    }
    for(auto val : b)
    {
        if(m[val.first] == 1) s2 += 3;
        if(m[val.first] == 2) s2 += 1;
    }
    for(auto val : c)
    {
        if(m[val.first] == 1) s3 += 3;
        if(m[val.first] == 2) s3 += 1;
    }
    cout << s1 << " " << s2 << " " << s3 << endl;
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