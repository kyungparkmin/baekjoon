#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
stack<char> st;
int main(){
	char str;
	cin>>str;
	
	stack<char> st;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); ++j)
		{
			if (st.empty() || s[j] == '(') st.push(s[j]);
			else if (st.top() == '(') st.pop();
		}

		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	
}
