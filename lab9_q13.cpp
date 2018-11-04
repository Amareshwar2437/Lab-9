//Include all necessary libraries
#include <iostream>
#include<cstring>
using namespace std;

int main(){
	int arr[10]={1,2,3,5,7,9,8,6,4,10};
	
	//By 1st Method
	//Plain Simple Array
	for(int i=0;i<10;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;

	//By pointer method
	int *p= arr;
	for(int i=0;i<10;i++){
		cout<<*(p+i)<<",";
	}

	return 0;
}
