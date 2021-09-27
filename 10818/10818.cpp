#include <iostream>
// #include <typeinfo>
// #include <string>
// #include <fstream>
// #include <vector>
// #include <sstream>

using namespace std;

// void parser(string str, int* result){
// 	istringstream ss(str);
// 	string stringBuffer;
// 	vector<string> x;
//     x.clear();
// 	while (getline(ss, stringBuffer, ' ')){
//         x.push_back(stringBuffer);
//         //cout<<stringBuffer<<" ";
//     }
//     for(int i=0;i<x.size();i++){
//     	result[i] = stoi(x[i]);   
//     }
// }

int get_min(int* arr, int length){
	int min = 1000000;
	for(int i = 0; i < length; ++i){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int get_max(int* arr, int length){
	int max = 1;
	for(int i = 0; i < length; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

int main(int argc, char** argv){
	//string inputDir = (string)argv[1];
	//cout << "입력 파일 명 : " << inputDir << endl;
	
	//ifstream readFile;
	//readFile.open(inputDir); 
	int numOfValues = 0;
	cin >> numOfValues;
	int* values = (int*)malloc(sizeof(int)*numOfValues);
	for(int i = 0; i < numOfValues; ++i){
		cin >> values[i];
	}
	// if(readFile.is_open()){
	// 	while(!readFile.eof()){
	// 		string str;		
	// 		getline(readFile, str);
	// 		if(count == 0){
	// 			numOfValues = stoi(str);
	// 			values = (int*)malloc(sizeof(int)*numOfValues);
	// 			//cout << "Length of Array " << numOfValues << endl;
	// 		}
	// 		else if(count == 1){
	// 			parser(str, values);
	// 			//for(int i = 0; i < numOfValues; ++i){
	// 			//	cout << values[i] << " ";
	// 			//}
	// 		}
	// 		count += 1;
	// 	}
	// }
	// readFile.close();

	int min = get_min(values, numOfValues);
	int max = get_max(values, numOfValues);
	
	cout << min << " " << max;
	return 0;
}
