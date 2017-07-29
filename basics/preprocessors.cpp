#include <iostream>

using namespace std;

void func1();
void func2();
 
void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();

// Below won't work with g++ compilers 
//#pragma startup func1
//#pragma exit func2

void func1()
{
    printf("Inside func1()\n");
}
 
void func2()
{
    printf("Inside func2()\n"); 
}

int main() {
	/*********** Preprocessors ***********************
	You can see the intermediate steps in the above diagram. 
	The source code written by programmers is stored in the file program.c. 
	This file is then processed by preprocessors and an expanded source code file is
	generated named program. This expanded file is compiled by the compiler and an object
	code file is generated named program.obj . Finally the linker links this object code
	file to the object code of the library functions to generate the executable file program.exe . 
	*************************************************/

	/******** Types ******************************
	There are 4 main types of preprocessor directives:

	Macros
    	File Inclusion
    	Conditional Compilation
    	Other directives
	********************************************/
	
	printf("Inside main()\n");	

	return 0;
}
