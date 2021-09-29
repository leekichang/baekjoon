#include <iostream>
#include <cstring>
using namespace std;

char* flip(char* str){
    int length = strlen(str);
    for(int i = 0; i < length/2; i++){
        swap(str[i], str[length-1-i]);
    }
    return 0;
}

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int get_short_str(char* A, char* B){
    if(strlen(A)<strlen(B)){
        return strlen(A);
    }
    else{
        return strlen(B);
    }
}

int get_long_str(char* A, char* B){
    if(strlen(A)>strlen(B)){
        return strlen(A);
    }
    else{
        return strlen(B);
    }
}

char* add_big_num(char* A, char* B){
    flip(A);
    flip(B);
    int s_length = get_short_str(A, B);
    int l_length = get_long_str(A, B);
    int sum ;
    int carry = 0;
    int a, b;
    if(strlen(A) > strlen(B)){
        for(int i = 0; i < s_length; i++){
            sum = 0;
            a = (int)A[i]-48;
            b = (int)B[i]-48;
            sum = a + b + carry;
            
            if(sum > 9){
                A[i] = sum%10+48;
                carry = 1; 
            }
            else{
                A[i] = sum+48;
                carry = 0;
            }
        }
        for(int i = s_length; i < l_length; i++){
            sum = 0;
            a = (int)A[i]-48;
            sum = a + carry;
            
            if(sum > 9){
                A[i] = sum%10+48;
                carry = 1; 
            }
            else{
                A[i] = sum+48;
                carry = 0;
            }
        }
        if(carry > 0){
            A[l_length] = '1';
        }
        flip(A);
        A[l_length+1] = '\0';
        return A;
    }
    else{
        for(int i = 0; i < s_length; i++){
            sum = 0;
            a = (int)A[i]-48;
            b = (int)B[i]-48;
            sum = a + b + carry;
            
            if(sum > 9){
                B[i] = sum%10+48;
                carry = 1; 
            }
            else{
                B[i] = sum+48;
                carry = 0;
            }
        }
        for(int i = s_length; i < l_length; i++){
            sum = 0;
            a = (int)B[i]-48;
            sum = a + carry;
            
            if(sum > 9){
                B[i] = sum%10+48;
                carry = 1; 
            }
            else{
                B[i] = sum+48;
                carry = 0;
            }
        }
        if(carry > 0){
            B[l_length] = '1';
        }
        flip(B);
        B[l_length+1] = '\0';
        return B;
    }
}

int main(){
    char A[10001], B[10001], C[10001], R[10001];
    cin >> A >> B;
    strcpy(R, add_big_num(A, B));
    cout << R << endl;
    //cout << strlen(A) << " " << B << endl;
    return 0;
}