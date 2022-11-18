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
    int ma1 = INT_MIN, ma2 = INT_MIN, mi1 = INT_MAX, mi2 = INT_MAX;
    vi v, w;
    while(n--){
        int x, y;
        cin >> x >> y;
        v.pb(x);
        w.pb(y);
        
    }
    ma1 = *max_element(all(v));
    ma2 = *max_element(all(w));
    mi1 = *min_element(all(v));
    mi2 = *min_element(all(w));
    mi1 = min(0,mi1);
    mi2 = min(0,mi2);
    ma1 = max(0,ma1);
    ma2 = max(0,ma2);
    cout << 2*(abs(ma1)+abs(ma2)) + 2*(abs(mi1)+abs(mi2)) << endl;
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