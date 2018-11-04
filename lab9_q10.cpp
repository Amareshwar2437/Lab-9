//Include all necessary libraries
#include <iostream>
#include<cstring>
using namespace std;

// Now we have to use function parameters 
void revrS(char* a)
{
    int spear;
    int suplex=0;
	// Now define necessary conditions under which these variables are gonna work    
    for(int x=0;(*(a+x))!='\0';x++)
    {
        suplex++;
    }
    spear=suplex-1;
    for(int x=spear;x>=0;x--)
    {
        cout<<*(a+x)<<endl;
    }
}
//Now we have to write the main function
int main()
{
    int size;
    cout<<"Please Enter size of the array:"<<endl;
    cin>>size;
    char arr[size];
    cout<<"Please Enter the members of the array:"<<endl;
        cin>>arr;
    //Use of pointers
//Use of calling by fucntion
    char* a=&arr[0];
    cout<<"Its reverse is:"<<endl;
    revrS(a);
    return 0;
}
//The Shield will be back...
