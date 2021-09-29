#include <iostream>
#include <string>
using namespace std;

string flip(string str){
    string result;
    result = str;
    for(int i = 0; i < str.length(); i++){
        result[str.length() - 1 - i] = str[i];
    }
    return result;
}

int get_bigger_one(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    string a, b;
    cin >> a >> b ;
    cout << get_bigger_one(stoi(flip(a)), stoi(flip(b))) << endl;
    return 0;
}