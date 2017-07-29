#include <iostream>

using namespace std;

int main()
{
	/*************************
	<< insertion operator
	>> extraction operator
	*************************/
	
	int age;
     
    	cout << "Enter your age:";
    	cin >> age;
    	cout << "Your age is: "<< age << '\n';
	
	// Un-buffered standard error stream (cerr):
	cerr << "An error has occured.\n";	

	// buffered standard error stream (clog)
	clog << "Another error has occured.\n";

	return 0;
}
