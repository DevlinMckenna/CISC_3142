#include<iostream>
#include<vector>
//#include<bits/stdc++.h>

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
double averageX=0;
double averageY=0;
double f1tot=0;
double f2tot=0;

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
	  

	averageX= xSum/nextLine;
	averageY= ySum/nextLine;

	cout<<"average of x's: "<< xSum/nextLine<<endl;
	cout<<"average of y's: "<< ySum/nextLine<<endl;

	for(int i = 0; i<vecX.size(); i++){			//because the formula for slope requires both averages and instantanious values I iterate throught
								//the whole vector
		double f1=(vecX[i]-averageX)*(vecX[i]-averageX);
		double f2=(vecX[i]-averageX)*(vecY[i]-averageY);
				
		f1tot= f1tot + f1;
		f2tot= f2tot + f2;
	}

	slope= f2tot/f1tot;

	intercept = averageY - (slope * averageX);		
	cout<< "intercept is: "<< intercept<<"\n";		
	cout<<"y^ is: "<< intercept<<"+("<<slope<< ")x \n";

	
}
