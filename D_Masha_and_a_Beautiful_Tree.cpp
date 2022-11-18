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

int ct = 0;
bool b = true;

void merge(vi &v, int first, int mid, int end)
{
    int ma1 = INT_MIN, mi1 = INT_MAX;
    int ma2 = INT_MIN, mi2 = INT_MAX;
    for(int i = first; i<=mid; i++)
    {
        if(v[i] > ma1) ma1 = v[i];
        if(v[i] < mi1) mi1 = v[i];
    }
    for(int i = mid+1; i<=end; i++)
    {
        if(v[i] > ma2) ma2 = v[i];
        if(v[i] < mi2) mi2 = v[i];
    }

    if((ma1 < ma2 and ma1 > mi2) or (mi1 > mi2 and mi1 < ma2) or (ma2 < ma1 and ma2 > mi1) or (mi2 > mi1 and mi2 < ma1))
        b = false;
    if(v[first] > v[mid]) ct++; 
    if(v[mid+1] > v[end]) ct++; 
    if(end-first == 1 and v[first] > v[end]) ct++;
}

void merges(vi &v, int first, int end)
{
    if(end-first > 0)
    {
        int mid = (first+end)/2;
        merges(v, first, mid);
        merges(v, mid+1, end);

        merge(v, first, mid, end);
    }
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i,0,n) cin >> v[i];

    merges(v, 0, n-1);
    if(b)
    {
        cout << ct << endl;
    }else{
        cout << -1 << endl;
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