//Include all necessary libraries
#include <iostream>
using namespace std;

int main()
{	//Write the main fucntion

int a=1;//declaration and initializing variable to store integer
	float b=81;	//declaration and initializing variable for storing float in the main function
	double c=123;	//declaration and initializing variable for storing double in the main fucntion
	bool d=1;	//declaration and initialising the boolian variable to be displayed as output
	char e='B';	//declaration and initialising the charachter variable to be displayd as output
	
	cout<<"The size of int from the initialisation is:"<<sizeof(a)<<endl;		//using the size of operator to print the size of integer variable a

	cout<<"The size of float by initialisaton is:"<<sizeof(b)<<endl;	//using the size of operator to print the size of float variable b
	
	cout<<"The size of double by initialisation is:"<<sizeof(c)<<endl;	//using the size of operator to print the size of double variable c
	
	cout<<"The size of boolean by initialisation is:"<<sizeof(d)<<endl;	//using the size of operator to print the size of boolian variable d
	
	cout<<"The size of char by initialisation is:"<<sizeof(e)<<endl;		//using the size of operator to print the size of integer variable e
	int *p;						//declaration and initializing of integer pointer variable 
	float *q;					//declaration and initializing of float pointer variable 
	double *r;					//declaration and initializing of double pointer variable 
	bool *s;					//declaration and initializing of boolian pointer variable 
	char *t;					//declaration and initializing of charachter pointer variable 
	
	cout<<"size of integer pointer:"<<sizeof(p)<<endl;
	cout<<"size of float pointer:"<<sizeof(q)<<endl;	//The final Endgame Maybe
	cout<<"size of double pointer:"<<sizeof(r)<<endl;
	
	cout<<"size of boolian pointer:"<<sizeof(s)<<endl;
	
	cout<<"size of char pointer:"<<sizeof(t)<<endl;
	
return 0;
}
//The Shield will reunite
//Lunatic Fringe and Kingslayer will reunite
