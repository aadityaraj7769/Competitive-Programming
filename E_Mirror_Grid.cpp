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
    vector<string> a(n);
    rep(i,0,n)
    {
        string h;
        cin >> h;
        a[i] = h;
    }
    ll ct = 0;
    int p = 0, r= n-1, y = 0, k = n-1;
    while(y != n/2)
    {
        ll sum = 0;
        sum = (a[y][p]-'0') + (a[p][k]-'0') + (a[k][r]-'0') + (a[r][y]-'0');
        if(sum == 1 || sum == 3) ct++;
        if(sum == 2) ct += 2;
        
        if(p == k-1)
        {
            y++;
            p = y;
            k--;
            r = k;
            continue;
        }
        p++; r--; 
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