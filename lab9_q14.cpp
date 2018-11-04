//Include all necessaary libraries
#include <iostream>
#include<cstring>
using namespace std;
//Write the main function
int main(){
	char apunkanam[9]= "Amareshwar";
	
	//By normal index method
	for(int i=0;i<4;i++){
	cout<<apunkanam[i]<<",";
	//Indent properly or sir will cut marks
	//Dear Sir, dont be too harsh to the non-Video Assignment people
	}
	cout<<endl;

	//By simple pointer method
	char *p=apunkanam;
	//Defining the conditions
	for(int i=0;i<8;i++){
	cout<<*(n+i)<<",";
	}
	return 0;
}
