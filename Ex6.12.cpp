#include <iostream>


using namespace std;



	int swapOmatic(int &four,int  &six){
		four = 6;

		return 0;
	}





	int main(){
		int four = 4;
		int six =6;	
		
		swapOmatic(four, six);

		cout<< four <<"\n";

	}
