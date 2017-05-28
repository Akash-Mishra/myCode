// counter = 5
// Akash M. Mishra
// 29 May
// https://www.hackerrank.com/challenges/the-birthday-bar
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int m = 0, d = 0, result = 0, tempSum = 0;
	cin>>d>>m;
	for(int i = 0; i < n; i++){
		tempSum = 0;
		for(int j = 0; j < m; j++){
			tempSum += arr[i + j];
		}
		if(tempSum == d)
			result++;
	}
	cout<<result<<endl;
	return 0;
}