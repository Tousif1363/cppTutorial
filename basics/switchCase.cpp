#include <iostream>
#include <string>

using namespace std;

int main() {
	string str = "GeekforGeeks";
	cout << "Intially str is: " + str + "\n";
	
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			//str[i]-= 32;
			str[i] = toupper(str[i]);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			//str[i]+= 32;
			str[i] = tolower(str[i]);
		}
	}
	
	cout << "After switching str is: " + str + "\n";

	return 0;
}
