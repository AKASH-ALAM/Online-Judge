#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 32000
vector <ll> prime;
void sieve(){
    prime.push_back(2);
    bool is_prime[MAX];
    for(int i = 0; i < MAX; i++) is_prime[i] = true;
    for(int i = 3; i <= MAX; i += 2){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j = i * i; j <= MAX; j += i+i){
                is_prime[j] = false;
            }
        }
    }
}

void segSieve(ll l, ll r){
    bool array[r-l+1];
    for(int i = 0; i < r-l+1; i++) array[i] = true;
    if(l == 1) array[0] = false;
    for(int i = 0; prime[i] * prime[i] <= r; i++){
        int cp = prime[i];
        int base = (l/cp) * cp;
        if(base < l) base += cp;
        for(int j = base; j <= r; j += cp){
            array[j-l] = false;
        }
        if(base == cp) array[base-l] = true;
    }
    for(int i = 0; i < r-l+1; i++){
        if(array[i]) cout << (i+l) << endl;
    } cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    sieve();
    int t;  cin >> t;
    while(t--){
        ll l, r;    cin >> l >> r;
        segSieve(l,r);
    }

    return 0;
}
