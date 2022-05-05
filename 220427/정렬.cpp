#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, arr[100000];
	cin>>a;
	for(int i = 0; i < a; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+a, greater<int>());
	for(int i = 0; i < a; i++){
		cout<<arr[i]<<"\n";
	}
	
}	
