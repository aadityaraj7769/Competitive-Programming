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
    int n, h, m;
    cin >> n >> h >> m;
    // pair<int,int>p[n];
    vector<pair<int,int>>p;
    int k = n;
    int l = 0;
    while(k--){
        int h1, m1;
        cin >> h1 >> m1;
        if(h1 > h && m1 >= m){
            p.pb({h1-h, m1-m});
            // p[l].first = h1-h;
            // p[l].second = m1-m;
        }
        if(h1 > h && m1 < m){
            p.pb({h1-h-1, 60-m+m1});
            // p[l].first = h1-h-1;
            // p[l].second = 60-m+m1;
        }
        if(h1 == h && m1 >= m){
            p.pb({0, m1-m});
            // p[l].first = 0;
            // p[l].second = m1-m;
        }
        if(h1 == h && m1 < m){
            p.pb({23, 60-m+m1});
            // p[l].first = 23;
            // p[l].second = 60-m+m1;
        }
        if(h1 < h && m1 >= m){
            p.pb({23-h+h1+1, m1-m});
            // p[l].first = 23-h+h1;
            // p[l].second = m1-m;
        }
        if(h1 < h && m1 < m){
            p.pb({23-h+h1, 60-m+m1});
            // p[l].first = 23-h+h1-1;
            // p[l].second = 60-m+m1;
        }
        l++;
    }
    sort(p);
    int ans = p[0].first;
    int mini = p[0].second;
    rep(i,1,n){
        if(p[i].first == ans){
            mini = min(mini, p[i].second);
        }
    }
    cout << ans << " " << mini << endl;

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