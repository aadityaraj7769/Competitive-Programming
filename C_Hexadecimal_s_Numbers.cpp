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
    if(n == 1000000000){
        cout << 512 << endl;
        return;
    }
    int a[1024][9];
    rep(i,1,1024)
    {
        int k = i;
        rep(j,0,9)
        {
            // while(k)
            // {
                if(k&1) a[i][j] = 1;
                else a[i][j] = 0;
                k /= 2;
            // }
        }
    }

    // rep(i,1,10)
    // {
    //     rep(j,0,9)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    set <int> b;
    int i = 0;
        rep(j,1,1024)
        {
            int f = 0, h = 0;
            rep(k,0,9)
            {
                // cout << a[j][k] << " ";
                f += a[j][k] * pow(10,h);
                h++;
            }
                // cout << endl << f << endl;
            b.insert(f);
            i++;

        }
        int ct = 0;
    for(auto st: b)
    {
        // cout << st << endl;
        if(st == 0) continue;
        if(st <= n) ct++;
        else break;
    }
    cout << ct << endl;

}

int main()
{
    int t = 1;
    // cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}