#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[10];
	int check[42] = { 0, };
	int count=0;
	for (int a = 0;a < 10;a++) {
		cin >> arr[a];
	}
	for (int i = 0;i < 10;i++) {
		check[arr[i] % 42] = 1;
	}
	for (int j = 0;j < 42;j++) {
		count += check[j];
	}

	cout << count;
}
