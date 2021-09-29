#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    string str;
    int iter;
    for(int i = 0; i < num; i++){
        cin >> iter;
        cin >> str;
        for(int j = 0; j < str.length(); j++){
            for(int k = 0; k < iter; k++){
                cout << str[j];
            }
        }
        cout << endl;
    }

    return 0;
}