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
#define pf(x)         push_front(x)
#define pb(x)       push_back(x)
#define eb(x)        emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)         (int)x.size()
#define debug(x)     cerr << #x << " = " << (x) <<endl
#define Fast_io    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

#define in 1
#define del 2
#define fnd 3

int main(){
    Fast_io;
    int q;  cin >> q;
    set <int> s;
    while(q--){
        int y, x;   cin >> y >> x;
        if(y == in) s.insert(x);
        else if(y == del) {
            s.erase(x);
        }
        else if(y == fnd){
            auto it = find(s.begin(), s.end(), x);
            if(it != s.end()) cout << "Yes" <<endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
