#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool is_prime(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;  cin >> n;
    if(is_prime(n)) cout << "The Number is prime." << endl;
    else cout << "Not prime!" << endl;

    return 0;
}