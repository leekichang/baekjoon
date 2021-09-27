#include <iostream>
using namespace std;

int get_max(int* arr, int length){
	int max = 1;
	for(int i = 0; i < length; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

double get_avg(double* arr, int length){
    double sum = 0;
    for(int i = 0; i < length; ++i){
        sum += arr[i];
    }
    double avg = sum/length;
    return avg;
}

int main(){
    int numOfValues;
    cin >> numOfValues;
    int* values = (int*)malloc(sizeof(int)*numOfValues);
    for(int i = 0; i < numOfValues; ++i){
        cin >> values[i];
    }
    int max;
    max = get_max(values, numOfValues);

    double* new_values = (double*)malloc(sizeof(double)*numOfValues);
    
    for(int i = 0; i < numOfValues; ++i){
        new_values[i] = ((double)values[i]/max)*100.0;
    }

    cout << get_avg(new_values, numOfValues);

    return 0;
}