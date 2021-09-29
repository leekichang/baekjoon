#include <iostream>
using namespace std;

int get_self_num(int n){
    return n + n/1000 + (n%1000)/100 + (n%100)/10 + n%10;
}

int main(){
    int count[1000000] = {0,};
    for(int i = 0; i <10000; ++i){
        count[get_self_num(i)-1] += 1;
    }
    for(int i = 0; i < 10000; ++i){
        if(count[i] == 0){
            cout << i+1 << endl;
        }
    }
    return 0;
}