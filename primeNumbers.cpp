#include <vector>
#include <iostream>

using namespace std;

bool testPrime(int prime)
{
	if(prime == 1 || prime == 0) return false;

		for(int i = 2; i < prime; i++)    {
	
		  if(prime % i == 0) return false;}
	
	
	return true;
}


int main()
{
	int test = 100;

	cout<<"list of primes in range 1-100: \n";
	for(int i = 1; i <= test; i++)
	{
				if(testPrime(i))
		{
			cout <<" \n"<< i;
		}
	}

	return 0;
}

