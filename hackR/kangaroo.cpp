// counter = 2
// Akash M. Mishra
// 27 May
// https://www.hackerrank.com/challenges/kangaroo
#include <iostream>
using namespace std;
void samePosition(int x1, int x2, int v1, int v2){
	if(v2 >= v1 && x1 != x2){
		cout<<"NO"<<endl;
	}
	else if(((x2-x1)%(v1-v2) == 0) && v1 > v2){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;

	return;
}
int main(){
	int x1, v1, x2, v2;
	cin>>x1>>v1>>x2>>v2;
	samePosition(x1, x2, v1, v2);
	return 0;
}