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
int a = 1;
void solve()
{
    int n;
    cin >> n;
    vector<pair<string,pair<int,int>>> v;
    vector<pair<string,pair<int,int>>> org;
    vector<pair<int,pair<string,int>>>w;
    rep(i,0,n)
    {
        string k;
        int x, y;
        cin >> k >> x >> y;
        v.pb({k,{x,y}});
        org.pb({k,{x,y}});
        w.pb({x,{k,y}});

    }
    sort(v);
    sort(w);
    int ct = 0;

    rep(i,0,n)
    {
        if(v[i].second.second == w[i].second.second and v[i].second.second == org[i].second.second )
        {
            ct++;
            // org[i].second.second = -1;
        }
        // if(w[i].second.second == org[i].second.second and org[i].second.second != -1)
        // {
        //     ct++;
        //     org[i].second.second = -1;
        // }
    }

    cout << "Case #" << a << ": " << ct << endl;
    a++;

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