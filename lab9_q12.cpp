//Include all necessary libraries
#include <iostream>
using namespace std;
//Writing the main fucntion
int main(){
	//Defining the integer variable
	int a =2,b=3;
	int *p;
	 p=&a;
	 b=*p;

	//Ask the user to print a
	cout<<a<<endl;

	//Ask the user to print b 
	cout<<b<<endl;

	//Ask the user to print p
	cout<<*p<<endl;
	a =2,b=3;

	//assigning pointer p to b
	p=&b;

	//Now print a
	cout<<"Value of a after assigning:"<<a<<endl;

	//Now print b
	cout<<"value of b after assigning:"<<b<<endl;

	//Now print p
	cout<<"value of *p :"<<*p<<endl;
return 0;
}
