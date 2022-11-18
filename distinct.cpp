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
    int n, k;
    cin >> n >> k;
    vi v(n);
    unordered_map<int,int> u;
    rep(i,0,n)
    {
        cin >> v[i];
        u[v[i]] = 1;
    }
    vi w = v;
    unordered_map<int,int> t = u;
    int maxi = *max_element(all(v));
    ll sum = 0;
    int ct = 0;
    int z = 2*n;
    if(k > 1)
    {
        if(u.find(2*n) == u.end())
        {
            maxi = 2*n;
            u[maxi] = 1;
            ct++;
        }
    }
    rep(i,0,z)
    {
        if(u.find(i+1) == u.end())
        {
            maxi = max(maxi, i+1);
            if(maxi == i+1 and maxi < 2*n)
            {
                maxi = 2*n;
                u[2*n] = 1;
                sum += maxi-2*n;
                i--;
                // n = 2*n-1;
                z = z-1;
                ct++;
                if(ct == k) break;
                continue;
            }
            sum += maxi-(i+1);
            u[i+1] = 1;
            ct++;
            if(ct == k) break;
        }
    }


    int maxii = *max_element(all(w));
    ll sumi = 0;
    int cti = 0;
    int zi = 2*n;
    rep(i,0,zi)
    {
        if(t.find(i+1) == t.end())
        {
            maxii = max(maxii, i+1);
            // cout << maxii << endl;
            if(maxii == i+1 and maxii < 2*n)
            {
                maxii = 2*n;
                t[2*n] = 1;
                sumi += maxii-2*n;
                i--;
                // n = 2*n-1;
                zi--;
                cti++;
                if(ct == k) break;
                continue;
            }
            sumi += maxii-(i+1);
            // cout << sumi << "dkg" << endl;
            t[i+1] = 1;
            cti++;
            if(cti == k) break;
        }
    }

    ll ans = max(sum, sumi);
    // cout << sum << " " << sumi << endl;
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