#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;
vector<int> v;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num, n, back=0;
	cin>>num;
	for(int i = 1; i <= num; i++){
		cin>>n;
		v.push_back(n);
	}
	back = v.back();
	sort(v.begin(), v.end());
	for(int i = 1; i <= v.size(); i++){
		cout<<v.pop_back()<<endl;
	}
	
	cout<<v.front()<<endl;
	cout<<back<<endl;
	
	cout<<v.front()-back<<endl;
} 
