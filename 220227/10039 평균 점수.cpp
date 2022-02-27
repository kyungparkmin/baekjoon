#include <iostream>
using namespace std;
int main(){
	int a[1000], sum=0;
	for(int i = 1; i <= 5; i++){
		cin>>a[i];
		if(a[i]<40){
			a[i]=40;
		}
		sum+=a[i];
	}
	cout<<sum/5<<endl;
}
