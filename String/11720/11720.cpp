#include <iostream>
#include <string>
using namespace std;

int main(){
    int length;
    cin >> length;
    char* str = (char*)malloc(sizeof(char)*length);
    cin >> str;
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += (int)str[i]-48;
    }
    cout << sum << endl;
    return 0;
}