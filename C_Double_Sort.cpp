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
const long N = 1e4 + 7;
const long long llmax = LONG_LONG_MAX;



void solve()
{
    int n;
    cin >> n;
    vi v(n),w(n);
    rep(i,0,n) cin >> v[i];
    rep(i,0,n) cin >> w[i];

    pair<int,int> p[N];
    rep(i,0,N)
    {
        p[i].first = -1; p[i].second = -1;
    }
    int k = 0;
    rep(i,0,n)
    {
        rep(j,i,n)
        {
            if(i != j)
            {
                if((v[i] > v[j] && w[i] < w[j]) || (v[i] < v[j] && w[i] > w[j]))
                {
                    cout << -1 << endl;
                    return;
                }
                if((v[i] > v[j] && w[i] > w[j]))
                {
                    swap(v[i],v[j]); swap(w[i],w[j]);
                    p[k].first = i; p[k].second = j;
                    k++;
                }
                if((v[i] > v[j] && w[i] == w[j]))
                {
                    swap(v[i],v[j]); swap(w[i],w[j]);
                    p[k].first = i; p[k].second = j;
                    k++;
                }
                if((v[i] == v[j] && w[i] > w[j]))
                {
                    swap(v[i],v[j]); swap(w[i],w[j]);
                    p[k].first = i; p[k].second = j;
                    k++;
                }
                
                
            }
        }
    }
    if(k == 0) {
        cout << 0 << endl;
        return;
    }
    cout << k << endl;
    rep(i,0,k)
    {
        cout << p[i].first+1 << " " << p[i].second+1 << endl;
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