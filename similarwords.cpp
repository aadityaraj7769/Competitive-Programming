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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    set<int> ms;
    FOR(i,0,n){
        string s;
        cin >> s;
        v[i] = s;
    }
    int sum = 0;
    FOR(i,0,n){
        FOR(j,i+1,n){
            FOR(k,0,m){
                sum += abs(v[i][k] - v[j][k]);
            }
            // cout << sum << endl;
            // sum *= -1;
            ms.insert(sum);
            sum = 0;
        }
    }
    for(auto sf: ms){
        cout << sf<< endl;
        break;
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