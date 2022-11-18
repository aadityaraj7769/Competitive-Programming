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


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n;
    cin >> n;
    vi v, pos, neg, ze;

    rep(i,0,n){
        int x;
        cin >> x;
        if(x > 0) pos.pb(x);
        if(x < 0) neg.pb(x);
        if(x == 0){
            if(ze.size() < 2) ze.pb(x);
        }
    }
    if(pos.size() > 2 || neg.size() > 2) {
        cout << "NO" << endl;
        return;
    }
    rep(i,0,pos.size()){
        ze.pb(pos[i]);
    }
    rep(i,0,neg.size()){
        ze.pb(neg[i]);
    }

    rep(i,0,ze.size())
    {
        rep(j,i+1,ze.size())
        {
            rep(k,j+1,ze.size())
            {
                bool ok = false;
                rep(l,0,ze.size())
                {
                    if(ze[i] + ze[j] + ze[k] == ze[l])
                    {
                        ok = true;
                    }
                }
                if(ok == false)
                {
                    cout << "NO" <<endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
    
    
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