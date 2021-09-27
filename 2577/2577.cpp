#include <iostream>
#include <string>
using namespace std;

int main(){
    int numOfValues = 3;
    int values[3];
    for(int i = 0; i < numOfValues; ++i){
        cin >> values[i];
    }
    int multiplication_result = values[0]*values[1]*values[2];
    string str = to_string(multiplication_result);
    int counts[10] = {0,};
    for(int i = 0; i < str.length(); i++){
        counts[(int)str[i]-48] += 1; 
    }
    for(int i = 0; i < 10; ++i){
        cout << counts[i] << endl;
    }
    return 0;
}