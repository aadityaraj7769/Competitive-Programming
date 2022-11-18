#include <bits/stdc++.h>
using namespace std;

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
#define FOR(i, a, b) for (int i = a; i < b; i++)

// Constants
const long long MOD = 1e9 + 7;
const long long llmax = LONG_LONG_MAX;

void solve()
{
    ll n;
    cin >> n;
    if(n < 3 || n%2 == 1) {
        cout << -1 << endl;
        return;
    }
    if(n % 12 == 0){
        cout << n/6 << " " << n/4 << endl ;
        return;
    }
    if(n % 6 == 0 && n % 4 == 2 ){
        cout << n/6 << " "  <<(n-2)/4 << endl;
        return;
    }
    if(n % 6 == 4 && n % 4 != 0){
        cout << (n+2)/6 << " " << (n-2)/4 << endl;
        return;
    }
    if (n % 6 == 2 && n % 4 != 0)
    {
        cout << (n + 4) / 6 << " " << (n - 2) / 4 << endl;
        return;
    }
    if(n % 4 == 0 && n % 6 == 2){
        cout << (n+4)/6 <<" "<< n/4 << endl;
        return;
    }
    if(n % 4 == 0 && n % 6 == 4){
        cout << (n+2)/6 << " " << n/4 << endl;
        return;
    }

    
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}