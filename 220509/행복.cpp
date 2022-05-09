#include <iostream>
using namespace std;
int main(){
	int a, max=-100000, min=100000, arr[1000];
	cin>>a;
	for(int i = 1; i <= a; i++){
		cin>>arr[i];
	}
	for(int i = 1; i <= a; i++){
		if(max<arr[i]) max=arr[i];
		if(min>arr[i]) min=arr[i];
	}
	cout<<max-min;
}
