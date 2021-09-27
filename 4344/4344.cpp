#include <iostream>
using namespace std;

double get_avg(int* arr, int length){
    double sum = 0;
    for(int i = 0; i < length; ++i){
        sum += arr[i];
    }
    double avg = sum/length;
    return avg;
}

double get_percentage(int* arr, double avg, int length){
    double count = 0.0;
    for(int i = 0; i < length; ++i){
        if((double)arr[i] > avg){
            count += 1;
        }
    }
    double result = count*100/length;
    return result;
}

int main(){
    int numOfValues;
    cin >> numOfValues;
    int numOfStudent;
    double avg;
    cout << fixed;
    cout.precision(3);
    for(int i = 0; i < numOfValues; ++i){
        cin >> numOfStudent;
        int* scores = (int*)malloc(sizeof(int)*numOfStudent);
        for(int j = 0; j < numOfStudent; ++j){
            cin >> scores[j];
        }
        avg = get_avg(scores, numOfStudent);
        double result = get_percentage(scores, avg, numOfStudent);
        cout << result << "%" << endl;
    }
    return 0;
}