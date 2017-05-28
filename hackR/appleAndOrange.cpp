//counter = 1
// Akash M. Mishra
// 26 May
// https://www.hackerrank.com/challenges/apple-and-orange
#include <iostream>
using namespace std;
int appleAndOrange(int counter, int tree, int s, int t){
	int result=0;
	while(counter > 0){
		counter--;
		int dist;
		cin>>dist;
		if(tree + dist >= s && tree + dist <= t)
			result++;
	}
	return result;
}
int main(){
	int s = 0, t = 0;
	cin>>s>>t;
	int tree1 = 0, tree2 = 0;
	cin>>tree1>>tree2;
	int counter1 = 0, counter2 = 0;
	cin>>counter1>>counter2;
	cout<<appleAndOrange(counter1, tree1, s, t)<<endl;
	cout<<appleAndOrange(counter2, tree2, s, t)<<endl;
	return 0;
}