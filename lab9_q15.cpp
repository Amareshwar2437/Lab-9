//Include all necessary libraries
#include <iostream>
using namespace std;
//Write the main function
	char str[11],*p;
	cout<<"Enter an input of 10 characters as string:"<<endl;
	
//Ask the user to give the input
           
	cin>>str;//Take value from terminal
	p=str;	//Defining pointers

	      // Pointer variable refers to the address of string
	//Calling the function
//Defining the function and also mentioning conditions
	for(int i=0;i<10;i++){
	for(int j=i+1;j<11;j++){
	cout<<*(p+j-1)<<endl;
	}

	}
	return 0;
}
