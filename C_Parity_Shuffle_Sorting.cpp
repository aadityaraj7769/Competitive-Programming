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
    rep(i,0,n) cin >> v[i];

    int a = v[0];
    vector<pair<int,int>> vp;
    rep(i,1,n)
    {
        if((a + v[i])&1)
        {
            v[i] = a;
            vp.pb({1,i+1});
        }
    }
    
    int pos = -1;
    for(int i = n-1; i>=0;i--)
    {
        if(v[i] != a){
            pos = i;
            break;
        }
    }
    // cout << pos << " hak" << endl;
    if(pos != -1)
    {
        for(int i = pos-1; i>=0; i--)
        {
            if(v[i] != a)
            {
                v[i] = v[pos];
                vp.pb({i+1,pos+1});
            }
        }
    }


    for(int i = n-1; i>0; i--)
    {
         if(v[i] < v[i-1])
         {
             vp.pb({i, i+1});
             v[i] = v[i+1];
         }
    }
    cout << vp.size() << endl;
    rep(i,0,vp.size())
    {
        cout << vp[i].first << " " << vp[i].second << endl;
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