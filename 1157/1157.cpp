#include <iostream>
#include <string>
using namespace std;

string to_upper(string str){
    for(int i = 0; i < str.size(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main(){
    string str;
    cin >> str;
    str = to_upper(str);
    int count[26] = {0,};
    for(int i = 0; i < str.length(); i++){
        count[str[i]-65] += 1;
    }
    int max_idx = -1;
    int max = 0;
    bool is_same = false;
    for(int i = 0; i < 26; i++){
        if(max < count[i]){
            max = count[i];
            max_idx = i;
            is_same = false;
        }
        else if(max == count[i]){
            is_same = true;
        }
    }

    if(is_same == true){
        cout << "?" << endl;
    }
    else{
        cout << char(65+max_idx) << endl;
    }
    return 0;
}