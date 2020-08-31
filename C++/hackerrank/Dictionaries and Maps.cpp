#include <iostream> 
#include <map> 
#include <string>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
#include <iterator> 

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, long> m;
    map <string, long>::iterator it;
    while(n--){
        string name; long number;
        cin >> name >> number;
        m.insert(make_pair(name, number));
    }

    string name;
    while(cin >> name){
        it = m.find(name);
        if(it != m.end()){
            cout << it->first << "=" << it->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}