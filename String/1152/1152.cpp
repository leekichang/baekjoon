#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ' && i != 0){
            if(str[i-1] != ' '){
                count += 1;
            }
        }
        if(i == str.length()-1 && str[i] != ' '){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}