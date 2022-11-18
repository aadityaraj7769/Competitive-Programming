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
    int n,m;
    cin >> n;
    vi v(n);
    rep(i,0,n){
        cin >> v[i];
    }
    cin >> m;
    vi w(m);
    rep(i,0,m) cin >> w[i];

    int x = *max_element(v.begin(),v.end());
    int y = *max_element(w.begin(),w.end());
    if(x > y)
    {
        cout << "Alice" << endl;
        cout <<"Alice" << endl;
    }
    else if(x < y)
    {
        cout << "Bob" << endl;
        cout <<"Bob" << endl;
    }else{
        cout << "Alice" << endl;
        cout <<"Bob" << endl;
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