#include <iostream>

using namespace std;

int main (){

	int a =100;
	int &r =a;
	int *pointy0 = &a;
	cout<< *pointy0 <<"  "<< pointy0<< endl;
	

	// to change pointer: (new address)
	int b=100;
	pointy0 = &b;
	cout << *pointy0<<"  "<< pointy0<< endl;
	

	// to change the value of the object to which pointer points:
	*pointy0 = 50;
	cout << *pointy0<<"  "<< pointy0<< endl;
	

	
	// to demonstrate TOP level const applied to pointer iteself(adddress is locked in while underlying object is mutable)
	int *const pointy1= &a;
	//pointy1=&b; this line generates an error becuase we attmepted to change address (that the pointer is pointing to)
	*pointy1=30;  // this is legal becuase the underlying object is changable



	//to demonstrate LOW level const applied to object (object value is locked while pointer address is mutable)
	const int *pointy2 = &a;
	pointy2= &b;	// this is legal becuase we are changing address.
	//*pointy2= 40; this statment yields error because we attempted to change the value of the underlying object
	

	// for referneces const is always LOW level
	const int &ref = a; 
	const int c = 0;
	//ref= c;  //  this line is attempting to change the address associate with &ref I'm not sure why it does not  work.  
	

}
