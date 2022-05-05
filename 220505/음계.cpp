#include <iostream>
using namespace std;
int main(){
	int arr[8] = {}, as=0, des = 0;
	for(int i = 0; i < 8; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < 7; i++){
		if(arr[i] < arr[i+1]){
			as++;
		}else{
			des++;
		}
	}
	
	if (as == 7){
		cout << "ascending";
	}else if(des==7){
		cout << "descending";
	}else{
		cout << "mixed";
	}


}
