#include <iostream>
using namespace std;


int main() {
	

string s("X out this string please");
char myChar= 'X';

for (char &c : s) 

c = myChar;

cout<< s<<"\n";
return 0;
}

