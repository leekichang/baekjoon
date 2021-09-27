#include <iostream>
using namespace std;

bool get_isHansoo(int n){
    if(n == 1000){
        return false;
    }
    else if(n >= 100 && n != 1000){
        if(2*((n%100)/10) == n/100 + n%10){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return true;
    }
}

int main(){
    int n;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        if(get_isHansoo(i+1) == true){
            count += 1;
        }
    }
    cout << count;
    return 0;
}