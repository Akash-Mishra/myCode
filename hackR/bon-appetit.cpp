//// counter = 3
// Akash M. Mishra
// 28 May
// https://www.hackerrank.com/challenges/bon-appetit
#include <iostream>
using namespace std;
void bonAppetit(int n, int k){
	int val = 0, sum = 0, temp = 0;
	for(int i = 0; i < n; i++){
		cin>>temp;
		if(i==k)
			val = temp;
		sum += temp;
		temp = 0;
	}

	int bCharged;
	cin>>bCharged;
	int bActual;
	bActual = sum/2 - val/2;
	if(bCharged - bActual == 0)
		cout<<"Bon Appetit"<<endl;
	else
		cout<<bCharged-bActual<<endl;
	return;
}
int main(){
	int n,k;
	cin>>n>>k;
	bonAppetit(n,k);
	return 0;
}