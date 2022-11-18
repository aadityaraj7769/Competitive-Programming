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
// #define sort(x) sort(x.begin(), x.end())
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
const long N = 2e5 + 7;
const long long llmax = LONG_LONG_MAX;
int val[N];
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    ll sum = 0;
    rep(i,0,n)
    {
        cin >> v[i];
        int k = v[i];
        while(k % 2 == 0)
        {
            k /= 2;
            sum++;
        }
        // cout << sum << endl;
    }
    int ans = 0;
    if(sum >= n) {
        cout << 0 << endl;
        return;
    }
    sort(val, val+n+1);
    int acc = accumulate(val, val+n+1, 0);
    if(sum + acc < n)
    {
        cout << -1 << endl;
        return;
    }
    // cout << val[0] << " " << val[1] << " " << val[2] << " " << val[3] << endl;
    int a = n-sum;
    if(a <= 0)
    {
        cout << 0 << endl;
        return;
    }
    for(int i = n; i>=1; i--)
    {
        // cout << a << " " << ans << " " << val[i] <<endl;
        if(a <= 0){
            break;
        }
        a -= val[i];
        ans++;
    }
    if(a > 0) {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
    // rep(i,1,20)
    // {
    //     cout << val[i] << " ";
    // }

}

int main()
{
    int t;
    
    rep(i,1,N)
    {
        int h = i;
        int ct = 0;
        while(h % 2 == 0)
        {
            ct++;
            h /= 2;
        }
        val[i] = ct;
    }
    cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}