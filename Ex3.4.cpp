#include <iostream>
using namespace std;
  

int main()
{
    string name0;
 	
    string name1;

    cin >> name0;

    cin>> name1;


  
    cout << "String0 : " << name0 << endl;
    cout<< "String1 : " << name1 << endl;

    if (name0.size()==name1.size()){
	    cout<<"first and second string are equal lengths\n";}
    else
  	    cout << "first and second string are NOT equal lengths\n";


    if (name0 == name1){
    	cout<< "string characters are equivalent\n";}

    else 
	cout<< "string Charaters are NOT equivelant\n";

    return 0;
}
