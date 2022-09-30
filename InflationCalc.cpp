#include <iostream>

using namespace std;


int main () {

	double initialValue;

	double inflationRate;

	int numberOfYears;

	cout<< "Enter item value in dollars: \n";

	cin >> initialValue;

	cout <<"Enter inflation rate in Pecentage:\n";

	cin >> inflationRate;

	cout << "Enter the number of years: \n";

	cin >> numberOfYears;

	int initialNumberOfYears = numberOfYears;

	inflationRate = inflationRate/100;

	inflationRate = inflationRate+1.00;

	double thisYearsValue = initialValue;

	while (numberOfYears > 0){     // main loop for calculating inflation, updates this years value everyiteration
					// decrements numberOfyears as condition for breaking out of loop

		thisYearsValue = thisYearsValue * inflationRate;

		numberOfYears--;
		}

	cout<< "Cost of item initially: "<< initialValue<<"\n";
	cout<<"After "<< initialNumberOfYears<<" years"<<"\n";
	cout<<"@inflation rate: "<< inflationRate<<"\n";
	cout<<"item will be worth: $"<< thisYearsValue<<"\n";

	}
