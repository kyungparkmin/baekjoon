#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
vector<string> v;
bool comp(string a, string b){
	return a<b;
} 
bool compare(string a, string b){
	if(a.size()==b.size()){
		return a<b;
	}
	return a.size() < b.size();

}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>>num;
	for(int i = 0; i < num; i++){
		string str;
		cin>>str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), compare);
	
	v.erase(unique(v.begin(), v.end()),v.end());
	
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<endl;
	}
}
