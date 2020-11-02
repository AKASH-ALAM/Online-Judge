/**
 *    Author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

bool cmp(string a, string b){
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

int main(){
    int t;  cin >> t;
    vector < pair <string, string> >p;
    while(t--){
        string s, tmp;   cin >> s;
        tmp = s;
        sort(tmp.begin(), tmp.end());
        p.push_back(make_pair(s, tmp));
    }
    for(int i = 0; i < p.size(); i++){
        for(int j = 0; j < p.size()-1; j++){
            if(!lexicographical_compare(p[j].second.begin(), p[j].second.end(), p[j+1].second.begin(), p[j+1].second.end())){
                swap(p[i].first, p[j+1].first);
                swap(p[i].second, p[j+1].second);
            }
        }
    }
    for(auto x : p) cout << x.first;
    cout << endl;
    return 0;
}
