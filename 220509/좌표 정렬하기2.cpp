#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int arr[1000], arr1[1000];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		cin>>arr1[i];
	}
		sort(arr1, arr1+n);
	sort(arr, arr+n);

	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
		cout<<arr1[i]<<endl;
	}
}
