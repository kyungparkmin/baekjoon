#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,sum=1;
	while(true){
		cin>>n;
		sum+=n;
		if(n == -1){
			break;
		}
	}
	cout<<sum<<endl;
}
