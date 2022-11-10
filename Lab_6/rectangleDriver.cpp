#include <iostream>
#include "Rectangle.h"

using namespace std;

int main (){

	Rectangle r0;	
	r0.setLength(5);
	r0.setWidth(2.5);

	Rectangle r1;
	r1.setLength(5);
	r1.setWidth(18.9);

	r0.show();
	r1.show();

	cout<<r0.sameRectangle(r1)<<endl<<endl;

}
