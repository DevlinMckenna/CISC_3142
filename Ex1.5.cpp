
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;
	int x;
	int y;
	cout<<"\nPlease enter first number to be added\n";
	cin>> x;
	cout<<"\nPlease enter second number to be added\n";
	cin>> y;


		g1.push_back(x);

		g1.push_back(y);

	cout << "Size : " << g1.size();

	

	// checks if the vector is empty or not
	if (g1.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

	cout <<"\n The sum of "<<g1.front()<<" and "<<g1.back()<<" is: "<< g1.front()+ g1.back()<<"\n\n"; 


	return 0;
}

