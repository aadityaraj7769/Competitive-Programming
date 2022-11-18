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
    int c, p;
    inputStream >> c >> p;
    for (int i = 0; i < c; i++)
    {
        string name;
        inputStream >> name;
    }
    

    outputStream << endl;
    outputStream << flush;
    inputStream.close();
    outputStream.close();
    return;
}

int main()
{
    int n = 6;
    string inputFiles[] = {"a_an_example.in.txt", "b_better_start_small.in.txt", "c_collaboration.in.txt", "d_dense_schedule.in.txt", "e_exceptional_skills.in.txt", "f_find_great_mentors.in.txt"};
    string outputFiles[] = {"Output1.txt", "Output2.txt", "Output3.txt", "Output4.txt", "Output5.txt", "Output6.txt"};
    for (ll i = 0; i < n; i++)
    {
        solve(inputFiles[i], outputFiles[i]);
    }
    return 0;
}
