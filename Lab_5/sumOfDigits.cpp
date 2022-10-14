#include <iostream>
#include <vector>

using namespace std;


int main(){
	
	int sumUp=0;

	cout<<"please enter a number:  ";

	string myNum;

	cin>>myNum;

	for(int i=0; i <myNum.size(); i++){

	
		sumUp = sumUp + (int(myNum[i]))-48;  //int(myNum) alone yeilds the ascii # for the selected character so i subtracted the 
						     //ascii value for zero
	}

	cout<<"the sum is :  "<<sumUp<<" \n";
}
