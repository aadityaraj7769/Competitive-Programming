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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n == 1)
    {
        if(s[0] == 'B')
            cout << 0 << endl;
        else cout << 1 << endl;
        return;
    }
    vi v(n, 0);
    if(s[0] == 'W')
    {
        v[0] = 1;
    }
    rep(i,1,n)
    {
        if(s[i] == 'W')
        {
            v[i] = v[i-1] + 1;
        }else{
            v[i] = v[i-1];
        }
    }
    int min = INT_MAX;
    rep(i,0,n)
    {
        if(v[k-1]-v[i] < min)
        {
            min = v[k-1]-v[i];
        }
        
        if(k == n)
            break;
        k++;
    }
    cout << min << endl;
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