#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define vb vector<bool>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define vpl vector<pair<long long, long long>>
#define ml map<long long, long long>
#define mpl map<pair<long long, long>, pair<long long, long long>>
#define pl pair<long long, long long>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

// Constants
const long long MOD = 1e9 + 7;
const string yes = "YES";
const string no = "NO";

void solve(string input, string output)
{
    ifstream inputStream;
    ofstream outputStream;
    inputStream.open("./Input/" + input);
    outputStream.open("./Output/" + output);
    if ((!(inputStream.is_open())) || (!(outputStream.is_open())))
    {
        cout << "Could not open file" << endl;
        return;
    }
    ll c;
    inputStream >> c;

    // ************
    map<string, pl> m;
    for (ll i = 0; i < c; i++)
    {
        ll l, d;
        inputStream >> l;
        string item;
        for (ll i = 0; i < l; i++)
        {
            inputStream >> item;
            (m[item].first)++;
        }
        inputStream >> d;
        for (ll i = 0; i < d; i++)
        {
            inputStream >> item;
            (m[item].second)++;
        }
    }
    inputStream.close();
    vector<string> foods;
    for (auto &&i : m)
    {
        pl p = i.second;
        if (p.first > p.second)
            foods.push_back(i.first);
    }
    // ************

    outputStream << foods.size() << " ";
    for (string i : foods)
        outputStream << i << " ";
    outputStream << endl;
    outputStream << flush;
    outputStream.close();
    return;
}

void score(string input, string output)
{
    ifstream inputStream;
    ifstream outputStream;
    inputStream.open("./Input/" + input);
    outputStream.open("./Output/" + output);
    if ((!(inputStream.is_open())) || (!(outputStream.is_open())))
    {
        cout << "Could not open file" << endl;
        return;
    }
    ll n;
    outputStream >> n;
    set<string> selected;
    for (ll i = 0; i < n; i++)
    {
        string item;
        outputStream >> item;
        selected.insert(item);
    }
    outputStream.close();
    ll c;
    inputStream >> c;
    ll customers = 0;
    for (ll i = 0; i < c; i++)
    {
        ll l, d;
        inputStream >> l;
        string item;
        bool isComing = true;
        for (ll i = 0; i < l; i++)
        {
            inputStream >> item;
            if (selected.find(item) == selected.end())
                isComing = false;
        }
        inputStream >> d;
        for (ll i = 0; i < d; i++)
        {
            inputStream >> item;
            if (selected.find(item) != selected.end())
                isComing = false;
        }
        if (isComing)
            customers++;
    }
    inputStream.close();
    cout << input << " --------> " << customers << endl;
    return;
}

int main()
{
    ll n = 5;
    string inputFiles[] = {"a_an_example.in.txt", "b_basic.in.txt", "c_coarse.in.txt", "d_difficult.in.txt", "e_elaborate.in.txt"};
    string outputFiles[] = {"Output1.txt", "Output2.txt", "Output3.txt", "Output4.txt", "Output5.txt"};
    for (ll i = 0; i < n; i++)
    {
        solve(inputFiles[i], outputFiles[i]);
        score(inputFiles[i], outputFiles[i]);
    }
    return 0;
}
