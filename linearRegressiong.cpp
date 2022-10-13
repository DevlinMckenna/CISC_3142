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

while (cin>>x>>y){
	

	cout<<" x:"<<x<<" y:"<<y<<"\n";
	vecX.push_back(x);
	vecY.push_back(y);
	xSum = xSum + x;
	ySum = ySum + y;
	nextLine++;
     		 }
	  


	cout<<"average of x's: "<< xSum/nextLine<<endl;
	cout<<"average of y's: "<< ySum/nextLine<<endl;

	for(int i = 0; i<vecX.size(); i++){
	slope = (vecX[i]-(ySum/nextLine) * vecY[i]-(xSum/nextLine))/(vecX[i]-(xSum/nextLine))*(vecX[i]-(xSum/nextLine));
	b1= b1 + slope;
	}

	intercept = (ySum/nextLine) - b1 * (xSum/nextLine);
	cout<< "intercept is: "<< intercept<<"\n";
	cout<<"y^ is: "<< intercept<<"+("<<b1<< ")x \n";

	
}
