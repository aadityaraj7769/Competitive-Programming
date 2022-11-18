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
    int a[n][5];
    rep(i,0,n)
    {
        rep(j,0,5) cin >> a[i][j];
    }
    int c1,c2,c3;
    bool ans = false;
    rep(i,0,5)
    {
        rep(j,0,5)
        {
            if(i!=j)
            {
                c1 = 0;
                c2 = 0;
                c3 = 0;
                rep(k,0,n)
                {
                    if(a[k][i] == 1) c1++;
                    if(a[k][j] == 1) c2++;
                    if(a[k][i] == 0 and a[k][j] == 0) c3++;
                }
                if(c3 == 0 and c2 >= n/2 and c1 >= n/2) ans = true;
                if(ans)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            // if(ans) break;
        }
        // if(ans) break;
    }
    cout << "NO" << endl;
    
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