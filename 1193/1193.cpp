#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int i = 1;
    int sum = 1;
    while(sum < a){
        i++;
        sum = i*(i+1)/2;
    }
    i--;
    sum = i*(i+1)/2;
    int gap = a-sum;
    if(i%2 != 0){
        cout << gap << "/" << (i+2)-gap << endl;
    }
    else{
        cout << (i+2)-gap << "/" << gap << endl;
    }
    return 0;
}