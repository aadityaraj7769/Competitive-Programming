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


int main()
{
    ll n, x;
    cin >> n >> x;
    vi v(11);
    rep(i,0,11) v[i] = -1;

    ll  cot = 0;
    ll a = x, ct = 0;
    while(a != 0)
    {
        v[ct] = a%10;
        a = a/10;
        ct++;
    }
    int y = ct;


    while(y <= n)
    {
        int z = *max_element(v.begin(),v.end());
        if(z == 1 && y !=n)
        {
            cout << -1;
            return 0;
        }
        if(y == n){
            cout << cot;
            return 0;
        }
        x = x * z;

        ll b = x, g = 0;
        while(b != 0)
        {
            v[g] = b%10;
            b = b/10;
            g++;
        }
        y = g;
        
        cot++;
    }
    if(y == n)
    {
        cout << cot;
    }
    else{
        cout << -1;
    }

    


    return 0;
}