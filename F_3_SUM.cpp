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
    int n;
    cin >> n;
    vi v(n);
    vi w(10,0);
    rep(i,0,n)
    {
        cin >> v[i];
        int k = v[i]%10;
        w[k]++;
    }
    if(w[1]>=3 || (w[0] >= 2 && w[3]>=1) || (w[2] >= 2 && w[9]>=1)|| (w[3] >= 2 && w[7]>=1)|| (w[5] >= 2 && w[3]>=1)|| (w[4] >= 2 && w[5]>=1)|| (w[9] >= 2 && w[5]>=1)|| (w[7] >= 2 && w[9]>=1)|| (w[8] >= 2 && w[7]>=1))
    {
        cout << "YES" << endl;
        return;
    }
    if(w[0] >=1)
    {
        if((w[1]>=1 && w[2]>=1) || (w[4]>=1 && w[9]>=1) || (w[5]>=1 && w[8] >=1) || (w[6]>=1 && w[7]>=1) )
        {
            cout << "YES" << endl;
            return;
        } 
    }
    if(w[1] >= 1)
    {
        if((w[4]>=1 && w[8]>=1) ||(w[3]>=1 && w[9]>=1) ||(w[5]>=1 && w[7]>=1) ||(w[6]>=2)){
            cout << "YES" << endl;
            return;
        }
    }
    if(w[2]>=1)
    {
        if((w[3]>=1 && w[8]>=1) || (w[4] >= 1 && w[7]>=1)|| (w[5] >= 1 && w[6]>=1)){
            cout << "YES" << endl;
            return;
        }
    }
    if((w[3] >= 1 && w[4] >= 1 && w[6] >= 1) || (w[8] >= 1 && w[9] >= 1 && w[6] >= 1))
    {
        cout << "YES" << endl;
            return;
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