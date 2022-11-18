#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
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
#define FOR(i,a,b) for(int i=a; i<b; i++) 


// Constants
const long long MOD = 1e9 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    int n;
    cin >> n;
    vl v(n);
    FOR(i,0,n){
        cin >> v[i];
    }
    int min = *min_element(v.begin(),v.end());
    FOR(i,0,n){
        v[i] -= min;
    }
    ll sum = accumulate(v.begin(),v.end(),0);
    cout << sum << endl;
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