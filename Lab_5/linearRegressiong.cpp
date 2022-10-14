#include<iostream>
#include<vector>

using namespace std;
double x;
double xSum=0;
double y;
double ySum=0;
int nextLine=0;
vector <double> vecX;
vector <double> vecY;
double slope;
double b1;
double intercept;

int main(){

cout<<"reading from input file: \n";

while (cin>>y>>x){ 		// input loop continues to read until input runs out.
	

	cout<<" x:"<<x<<" y:"<<y<<"\n"; 
	vecX.push_back(x);		//inputs saved into respective vectors
	vecY.push_back(y);
	xSum = xSum + x;		// sum values add up all entries for use in numerator of  averages/means
	ySum = ySum + y;
	nextLine++;			// nextline values count iterations for use in demnomonator of  averages/means 
     		 }
	  


	cout<<"average of x's: "<< xSum/nextLine<<endl;
	cout<<"average of y's: "<< ySum/nextLine<<endl;

	for(int i = 0; i<vecX.size(); i++){			//because the formula for slope requires both averages and instantanious values I iterate throught
								//the whole vector 
	slope = (vecX[i]-(xSum/nextLine) * vecY[i]-(ySum/nextLine))/(vecX[i]-(xSum/nextLine))*(vecX[i]-(xSum/nextLine));
	b1= b1 + slope;
	}

	intercept = (ySum/nextLine) - b1 * (xSum/nextLine);		
	cout<< "intercept is: "<< intercept<<"\n";		
	cout<<"y^ is: "<< intercept<<"+("<<b1<< ")x \n";

	
}
