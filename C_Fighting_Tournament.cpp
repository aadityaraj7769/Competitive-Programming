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
    int n, q, r;
    cin >> n >> q;
    vi v(n), w(n);
    map<int,int> m;
    rep(i,0,n)
    {
        cin >> v[i];
        m[v[i]] = i;
        if(v[i] == n) r = i;
    }
    w[0] = 0;
    int maxi = v[0];
    rep(i,1,n)
    {
        if(v[i] > maxi){
            w[i] = 1;
            maxi = v[i];
        }else{
            w[i] = 0;
        }
    }

    while(q--)
    {
        int i, k;
        cin >> i >> k;
        int pos = m[v[i-1]];
        if(k < i-1 || (w[i-1] == 0 && i != 1))
            cout << 0 << endl;
        else{
            if((v[i-1] == n && i == 1))
            {
                cout << k-i+1 << endl;

            }
            else if(v[i-1] == n )
            {
                // cout << k << " " << i << endl;
                cout << k-i+2 << endl;
            }
            else{
                int h = 0;
                // cout << v[i] << endl;
                rep(g, i-1, n)
                {
                    // cout << v[g] << endl;
                    if(v[g] > v[i-1]){
                        // cout << g << endl;
                        h = g;
                        break;
                    }
                }
                if(k < h && i != 1)
                {
                    // cout << k << " " << i << endl;
                    cout << k-i+2 << endl;
                }
                else if(k < h )
                {
                    cout << k-i+1 << endl;
                }
                else if(k>=h && i == 1){
                    // cout << h << " " << i << endl;
                    cout << h-i << endl;
                }else{
                    cout << h-i +1 << endl;
                }
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