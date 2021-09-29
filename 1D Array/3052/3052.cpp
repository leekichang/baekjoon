#include <iostream>
using namespace std;

int main(){
    int numOfValues = 10;
    int remain[42] = {0,};
    int value;
    for(int i = 0; i < numOfValues; ++i){
        cin >> value;
        remain[value%42] += 1;
    }
    int count = 0;
    for(int i = 0; i < 42; ++i){
        if(remain[i] != 0){
            count += 1;
        }
    }
    cout << count;
    return 0;
}