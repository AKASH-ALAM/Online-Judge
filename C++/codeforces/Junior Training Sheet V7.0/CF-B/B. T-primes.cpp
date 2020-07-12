#include <bits/stdc++.h>
#define endl '\n'
#define first_io ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int main(){
    first_io;

    long long size, i, j;   cin >> size;
    long long *arry = (long long*) malloc (sizeof(long long) * size);

    for(int i = 0; i < size; i++)   cin >> *(arry+i);

    int count = 0;

    for(i = 0; i < size; i++){
        for(j = 1; j <= 10; j++){
            if(*(arry+i) % j == 0 && count <= 4){
                //cout << "j : " << j << endl;
                count++;
            }
        }

        if(*(arry+i) > 10) count++;
        if(count == 3) cout <<"YES" << endl;
        else cout << "NO" << endl;
        count = 0;
    }
    return 0;
}
