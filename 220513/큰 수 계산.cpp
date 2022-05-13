#include <iostream>
using namespace std;
int main(){
	int n, arr[1000], sum=0, cnt=0;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>arr[i];
		if(arr[i]==1){
			cnt++;
			sum += cnt;
		}else{
			cnt=0;
		}
	}
	cout<<sum<<endl;
}
