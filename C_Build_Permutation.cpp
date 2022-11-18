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
const long N = 1e6 + 7;
const long long llmax = LONG_LONG_MAX;

vi d;


void solve()
{
    int n;
    cin >> n;
    vi w;
    int i = n-1;
    while(i>=0){
        int k = 0;
        rep(j,0,d.size()-1){
            if(i <= d[j]){
                k = d[j];
                break;
            }
        }
        int a = k-i;
        int h = a;
        int y = i-h+1;
        for(int e = 0; e<y; e++){
            w.pb(a);
            a++;
            i--;
        }

    }
    // reverse(all(w));
    for(int f = n-1; f>=0; f--){
        cout << w[f] << " ";
    }
    cout << endl;


}

int main()
{
    for(int i = 0; i*i <= N; i++){
        d.pb(i*i);
    }
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }



    return 0;
}