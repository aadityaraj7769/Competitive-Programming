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

ll mi ;
int l, r;
void printDivisors(int n)
{
    int ct = 0;
    unordered_set<int> u;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
            {
                if(i >= l)
                    u.insert(i);
            }
 
            else // Otherwise print both
            {
                if(i >= l) u.insert(i);
                if(n/i >=l && n/i != n) u.insert(n/i);
            }
                // ct+=2;
        }
    }
    ct = u.size();
    // cout << ct << " " << n << endl;
    mi+= (ct*1LL*(ct-1))/2;
    // cout <<mi << endl;
}

void solve()
{
    mi = 0;
    
    cin >> l >> r;
    if(r-l == 2)
    {
        cout << 1 << endl;
        return;
    }
    int k = r-l+1;
    ll sum = (k*1LL*(k-1)*1LL*(k-2))/6;
    // cout << sum << endl;
    rep(i,l+2,r+1)
    {
        printDivisors(i);
        // cout << mi << endl;
    }
    ll ans = sum-mi;
    cout << ans << endl;
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