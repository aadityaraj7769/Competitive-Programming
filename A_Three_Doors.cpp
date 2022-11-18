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
    int x, a, b, c;
    cin >> x >> a >> b >> c;
    if(x == 1)
    {
        if(a == 0 || a == 1) {
            cout << "NO" << endl;
            return;
        }
        if(a == 2)
        {
            if(b == 0 || b == 1){
                cout << "NO" << endl;
                return;
            }
            if(b == 3){
                cout << "YES" << endl;
                return;
            }

        }
        if(a == 3)
        {
            if(c == 0 || c == 1){
                cout << "NO" <<endl;
                return;
            }
            if(c == 2)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    if(x == 2)
    {
        if(b == 0 || b == 2) {
            cout << "NO" << endl;
            return;
        }
        if(b == 1)
        {
            if(a == 0 || a == 1){
                cout << "NO" << endl;
                return;
            }
            if(a == 3){
                cout << "YES" << endl;
                return;
            }

        }
        if(b == 3)
        {
            if(c == 0 || c == 2){
                cout << "NO" <<endl;
                return;
            }
            if(c == 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    if(x == 3)
    {
        if(c == 0 || c == 3) {
            cout << "NO" << endl;
            return;
        }
        if(c == 1)
        {
            if(a == 0 || a == 1){
                cout << "NO" << endl;
                return;
            }
            if(a == 2){
                cout << "YES" << endl;
                return;
            }

        }
        if(c == 2)
        {
            if(b == 0 || b == 2){
                cout << "NO" <<endl;
                return;
            }
            if(b == 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
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