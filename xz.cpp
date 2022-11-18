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
int alpha = 1;

void solve()
{
    ll l, n;
    cin >> l >> n;
    ll ct = 0, path = 0;
    while(n--)
    {
        int x; 
        char ch;
        cin >> x >> ch;
        if(ch == 'C')
        {
            // if(path >= 0)
            // {
                path += x;
                ct += path/l;
                path = path % l;
            // }
            // else{
            //     path += x;
            //     if(path >= l){
            //         ct += path/l;
            //         path = path % l;
            //     }
            // }
         

        }
        else if(ch == 'A')
        {
            path -= x;
            ll k = -1*path;
            ct += k/l;
            k = k%l;
            path = -1*k;
        }

    }
    ll ans = ct;
    cout << "Case #" << alpha << ": " << ans << endl;
    alpha++; 
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