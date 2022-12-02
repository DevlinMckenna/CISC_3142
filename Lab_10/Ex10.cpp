
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <numeric>

using namespace std;

struct Movie
{

	int year;
	int length;
	string title;
	string subject;
	string actor;
	string actress;
	string director;
	int popularity;
	string award;
	string image;

	void setYear(int x) { year = x; }
	void setLength(int x) { length = x; }
	void setTitle(string x) { title = x; }
	void setSubject(string x) { subject = x; }
	void setactor(string x) { actor = x; }
	void setactress(string x) { actress = x; }
	void setdirector(string x) { director = x; }
	void setpopularity(int x) { popularity = x; }
	void setAward(string x) { award = x; }
	void setImage(string x) { image = x; }

	void show()
	{
		cout << "the year is: " << year << endl;
		cout << "length is: " << length << endl;
		cout << "title is: " << title << endl;
		cout << "subject is: " << subject << endl;
		cout << "actor is: " << actor << endl;
		cout << "acress is:" << actress << endl;
		cout << "the director is: " << director << endl;
		cout << "the popularity is : " << popularity << endl;
		cout << "the award is: " << award << endl;
		cout << "the image is: " << image << endl;
	}
};

int main()
{
	ifstream input("inputFilmData.txt");

	vector<Movie> vecMovie;
	vector<Movie>::iterator itr;
	vector<string> vecTit;
	string data;

	getline(input, data);
	getline(input, data);

	while (input.good())
	{

		for (int i = 0; i < 50; i++)
		{
			Movie m0;

			getline(input, data, ';');
			stringstream s0(data);
			int x;
			s0 >> x;
			m0.setYear(x);

			getline(input, data, ';');
			stringstream s1(data);
			s1 >> x;
			m0.setLength(x);

			getline(input, data, ';');
			m0.setTitle(data);

			getline(input, data, ';');
			m0.setSubject(data);

			getline(input, data, ';');
			m0.setactor(data);

			getline(input, data, ';');
			m0.setactress(data);

			getline(input, data, ';');
			m0.setdirector(data);

			getline(input, data, ';');
			stringstream s2(data);
			s2 >> x;
			m0.setpopularity(x);

			getline(input, data, ';');
			m0.setAward(data);

			getline(input, data, '\n');
			m0.setImage(data);

			vecMovie.push_back(m0);
		}
	}
	cout << "contents of the first Movie object: " << endl;
	vecMovie[0].show();

	int sum = 0;
	// I tried using the built in accumulate function with both iterators and direct element references neither is working.
	// error message "'std::vector<Movie>::iterator' has no member named 'begin'"
	// cout << accumulate((*it.begin()).length, (*it.end()).length, sum) << endl;
	// instead I've implemnted my own accumulate algo below:
	for (int i = 0; i < 50; i++)
	{
		sum = sum + vecMovie[i].length;
	}
	cout << endl
		 << "the accumulated sum of movie lengths is: " << sum << endl; 
	// tried to use the built in sort() function but the again couldnt get sort to accept a pointer to a vector of			//	 movie objects.
	// or direct references to the .popularity fields : sort(vecMovie[0].popularity, vecMovie[50].popularity)
	// sort((*vecMovie.begin()).popularity, (*vecMovie.end()).popularity); 
	// instead i've implemented my own sorting algo below:

	int temp;
	int index;
	for (int i = 0; i < 50; i++)
	{
						//vecMovie holds my Movie objects, while
						//vecTit is a vector of strings that just hold titles. 
		for (int j = 0; j < 50; j++)
		{
			temp = vecMovie[i].popularity;
			if (temp < vecMovie[j].popularity)
			{
				temp = vecMovie[j].popularity;
				index = j;
			}
		}
		vecTit.push_back(vecMovie[index].title);
		vecMovie[index].popularity = 0;	// after each run throught the movie vector I set 
						// the movie with the max popularity to 0 so that it will not repeatedly
						// find the max popularity 
	}

	cout << endl
		 << " top fifty titles ordered by popularity:\n  " << endl;

	for (int i = 0; i < 50; i++)
	{
		cout << vecTit[i] << endl;
	}

	// my attempt to use find function:
	//
	//string findThis ="Cuba"; 
	//itr = find(vecTit.begin(),vecTit.end(),findThis);
}	//cout<<"element at position:" << itr-vecTit.begin;
	//this time instead of a vector of Movie objects I tried to use a vector of titles(strings)
	//but it throws an error:.cpp:
	//error: no viable overloaded '='
       // itr = find(vecTit.begin(),vecTit.end(),findThis);
      //  ~~~ ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

