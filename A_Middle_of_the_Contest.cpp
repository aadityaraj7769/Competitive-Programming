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
    string s1,s2;
    cin >> s1 >> s2;
    int k1 = 60*(s1[1]-'0') + 600*(s1[0]-'0') + (s1[4]-'0') + 10*(s1[3]-'0');
    int k2 = 60*(s2[1]-'0') + 600*(s2[0]-'0') + (s2[4]-'0') + 10*(s2[3]-'0');
    int z = (k2+k1)/2;
    int a = z/60;
    int b = z%60;
    if(a <= 9 and b <= 9)
    {
        cout << "0" << a << ":" << "0" << b << endl;
        return;
    }
    if(a <= 9)
    {
        cout << "0" << a << ":" << b << endl;
        return;
    }
    if(b <= 9)
    {
        cout  << a << ":" << "0" << b << endl;
        return;
    }
    cout << a << ":" << b << endl;
    // cout << k1 << " " << k2 << endl;
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