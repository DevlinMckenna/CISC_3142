#include <iostream>
#include <vector>
using namespace std;


int main(){

vector <string> myVec;
int count8;

string str0;
cout<<"please enter a string";
cin >> str0;

while (str0 != "end"){


	for(auto &c : str0)
	c = toupper(c);

	myVec.push_back(str0);
	cout<<"enter another string";
	cin>> str0;

}

cout<<"done inputing";

cout<<"Printing Vector elements: \n";

for (int i; i<=myVec.size(); i++){

count8++;

if(count8 != 9){
cout << myVec[i]<<"   ";}

else 
{cout<< "\n\n"<<myVec[i]<<"   ";
	
 count8= 0;
}

}

return 0;

}
