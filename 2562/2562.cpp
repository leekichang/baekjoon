#include <iostream>
using namespace std;

int main(){
    int numOfValues = 9;
    int* values = (int*)malloc(sizeof(int)*numOfValues);
    int max = -1;
    int max_idx = -1;
    int curr = 0;
    for(int i = 0; i < numOfValues; ++i){
        cin >> curr;
        if(curr > max){
            max = curr;
            max_idx = i;
        }
    }
    cout << max << "\n" << max_idx+1;
    return 0;
}