using namespace std;

#include <iostream>


class Sample
{
private:
int x;
double y;
public :

	Sample(); {
		
		x = 0;
		y=0.0;
	}
	  

Sample(int n); {
		x=n;
		y=0.0	}

Sample(int, int); //Constructor 3
Sample(int, double); //Constructor 4
};
