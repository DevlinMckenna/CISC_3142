#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

	int main(){
		vector<int> v0(10,4);	
		vector<int>::iterator it;
		
		for (it=v0.begin();it!=v0.end(); it++){
			cout<<*it<<endl;}	

	}
