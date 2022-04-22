#include <iostream>
using namespace std;
int main(){
	int a,b, arr[10000], sum=0, cnt=0;
	double avg=0, tot=0;
	cin>>a;
	for(int i = 1; i <= a; i++){
		sum=0;
		cnt=0;
		avg=0;
		tot=0;
		cin>>b;
		for(int j = 1; j <= b; j++){
			cin>>arr[j];
			sum+=arr[j];
		}
		avg = ((double)sum/(double)b);
		for(int j = 1; j <= b; j++){
			if(arr[j]>avg){
				cnt++;
			}
		}
		tot = ((double)cnt / b) * 100.0;
        printf("%.3lf%%\n", tot);
	}
}
