// counter = 0
// Akash M. Mishra
// 26 May
// https://www.hackerrank.com/challenges/grading
#include <iostream>
using namespace std;
int gradeFinal(int x){

	int grade = 0;
	if(x < 38)
		return x;

	if(5-x%5 < 3)
		grade =  x + 5 - x % 5;
	else
		grade = x;

	return grade;		 
}
int main(){
	int n;
	cin>>n;
	while(n>0){
		n--;
		int num;
		cin>>num;
		cout<<gradeFinal(num)<<endl;
	}
}