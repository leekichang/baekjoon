#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count[26];
    for(int i = 0; i <26; ++i){
        count[i] = -1;
    }

    for(int i = 0; i < str.length(); ++i){
        if(count[str[i]-97] == -1){
            count[str[i]-97] = i;
        }
    }

    for(int i = 0; i <26; ++i){
        cout << count[i] << " ";
    }
    return 0;
}