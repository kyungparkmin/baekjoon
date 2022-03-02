#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	int arr[1000]; 
	for(int i = 1; i <= 3; i++){
		cin>>a;
		arr[i]+=a;
	}
	for(int i = 1; i <= 3; i++){
		sort(arr, arr+4);
	}
	for(int i = 1; i <= 3; i++){
		cout<<arr[i]<<' ';
	}
}
