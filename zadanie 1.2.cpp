#include <iostream>

using namespace std;

struct Director {
	string lastName;
	int age;
};

struct  Movie
{
	string Title;
	int releaseYear;
	shared_ptr<Director> director;
};


int main()
{
	
	shared_ptr<Director> QuentinT(new Director);
	QuentinT->age = 57;
	QuentinT->lastName = "Tarantino";


	Movie* movie1 = new Movie();
	(*movie1).releaseYear = 1994;
	(*movie1).Title = "Pulp Fiction";
	(*movie1).director = QuentinT;


	cout <<"Title:    "<< movie1->Title << endl;
	cout << "Release:  " << movie1->releaseYear << endl;
	cout <<"Director: "<< movie1->director->lastName << endl;
	

}