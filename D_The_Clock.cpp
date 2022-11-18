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
#define rep(i,a,b) for(int i=a; i<b; i++) 


// Constants
const long long MOD = 1e9 + 7;
const long N = 1e5 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    string s;
    cin >> s;
    int m;
    cin >> m;
    vi v(16);
    v[0] = 0;
    rep(i,1,6)
    {
        v[i] = v[i-1] + 70;
    }
    v[6] = 601;
    rep(i,7,12)
    {
        v[i] = v[i-1] + 70;
    }
    v[12] = 1202;
    rep(i,13,16)
    {
        v[i] = v[i-1] + 70;
    }
    int ct = 0, k = 0;
    int x = ((s[0]-48)*10 + (s[1]-48))*60 + (s[3]-48)*10 + (s[4]-48);
    // cout << x << endl;
   
    int h = x, y = 2500;
    while(y--)
    {
        rep(j,0,16)
        {
            if(h == v[j])
            {
                ct++;
                v[j] = INT_MAX;
            }
        }
        
        h += m;
        h %= 1440;
    }
    
    cout << ct << endl;
    // cout << endl;
    
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