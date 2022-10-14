#include <vector>
#include <iostream>

using namespace std;

bool testPrime(int prime)			//boolean function that recives one interget to test whether or not it is prime
{
	if(prime == 1 || prime == 0) return false; // dont test for input 1 and 0

		for(int i = 2; i < prime; i++)    {	// iterates from 2 up to our parameter #
	
		  if(prime % i == 0) return false;}	// uses modulus operator to test whether i divides evenly into our parameter #
	
	
	return true;  			// if i reaches the parameter number without a even division we found a prime
}


int main()
{
	int limit = 100;

	cout<<"list of primes in range 1-100: \n";  // simply calls  my testPrime function with inputs 1-limit
	for(int i = 1; i <= limit; i++)
	{
				if(testPrime(i))
		{
			cout <<" \n"<< i;
		}
	}

	return 0;
}

