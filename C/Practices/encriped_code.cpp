#include<bits/stdc++.h>
using namespace std;

string upper_string(string s, int size){

    for(int i = 0; i < size; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = (s[i] - 'a') + 'A';
            }
        }
    return s;
}

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string  al = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s; getline(cin, s);
    
    int len = s.size();
    s = upper_string(s, len);

    for(int i = 0; i < len; i++){
        if(s[i] == ' '){
            s[i] = '%';
        }
    } // for space. i replace it with %;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < 26; j++){
            if(s[i] == al[j]){
                int in = ((j + 1) * 8)-1;
                if(in > 26 ){
                    in = in % 26;
                } 
                s[i] = al[in];
                break;
            }
        }
    } cout << s << endl;
    return 0;
}