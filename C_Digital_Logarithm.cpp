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

int digts(int x)
{
    int k = 0;
    while(x > 0)
    {
        k++;
        x = x/10;
    }
    return k;
}

void solve()
{
    int n;
    cin >> n;
    vi v(n), w(n);
    vb a(n, false), b(n, false);
    unordered_map<int, int> v_dig, v_pos,v_digpos;
    unordered_map<int, int> w_dig, w_pos, w_digpos;

    rep(i,0,n)
    {
        cin >> v[i];
        int k = digts(v[i]);
        v_dig[v[i]] = k;
        v_pos[v[i]] = i;
        v_digpos[k] = i;
    }
    rep(i,0,n)
    {
        cin >> w[i];
        int h = digts(w[i]);
        w_pos[w[i]] = i;
        w_dig[w[i]] = h; 
        w_digpos[h] = i;
    }
    ll ct = 0;
    rep(i,0,n)
    {
        int y = v[i];
        // same number
       if(w_pos.find(y) != w_pos.end() and a[i] == false and b[w_pos[y]] == false)
       {
           a[i] = true;
           b[w_pos[y]] = true;
           
       }
       //digits in v and number in w
       if(w_pos.find(v_dig[v[i]]) != w_pos.end() and a[i] == false and b[w_pos[v_dig[v[i]]]] == false)
       {
           a[i] = true;
           b[w_pos[v_dig[v[i]]]] = true;
           ct++;
       }
       if(v[i] < 10 and w_digpos.find(v[i]) != w_digpos.end() and a[i] == false and b[w_digpos[v[i]]] == false)
       {
           a[i] = true;
           b[w_digpos[v[i]]] = true;
           ct++;
       }

        int z = w[i];

       if(v_pos.find(z) != v_pos.end() and b[i] == false and a[v_pos[z]] == false)
       {
           b[i] = true;
           a[v_pos[z]] = true;
           
       }
       //digits in w and number in v
       if(v_pos.find(w_dig[w[i]]) != v_pos.end() and b[i] == false and a[v_pos[w_dig[w[i]]]] == false)
       {
           b[i] = true;
           a[v_pos[w_dig[w[i]]]] = true;
           ct++;
       }
        if(w[i] < 10 and v_digpos.find(w[i]) != v_digpos.end() and b[i] == false and a[v_digpos[w[i]]] == false)
       {
           b[i] = true;
           a[v_digpos[w[i]]] = true;
           ct++;
       }

       if(a[i] == false )
       {
           if(v[i] < 10 and v[i] != 1) ct++;
           else if(v[i] != 1) ct += 2;
           a[i] = true;
       }
       if(b[i] == false )
       {
           if(w[i] < 10 and w[i] != 1) ct++;
           else if(w[i] != 1) ct += 2;
           b[i] = true;
       }

    }
    cout << ct<<endl;
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