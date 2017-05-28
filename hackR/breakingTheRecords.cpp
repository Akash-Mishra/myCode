// counter = 4
// Akash M. Mishra
// 28 May
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records
#include <iostream>
using namespace std;
int main(){
	int n, leastSoFar = 0, leastCount = 0, mostSoFar = 0, mostCount = 0, temp = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>temp;
		// cout<<temp<<endl;
		if(i == 0){
			leastSoFar = temp;
			mostSoFar = temp;
		}
		if(temp < leastSoFar){
			leastSoFar = temp;
			leastCount++;
		}
		if(temp > mostSoFar){
			mostSoFar = temp;
			mostCount++;
		}
		temp = 0;
	}
	cout<<mostCount<<" "<<leastCount<<endl;
	return 0;
}