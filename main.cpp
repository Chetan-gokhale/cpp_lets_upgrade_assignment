/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


// code to check if 2 numbers are equal
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the 2 numbers "<<endl;
    
    cin>>a>>b;
    
    if(a==b)
    {
        cout<<"the two numbers "<<a<<" and "<<b<<" are equal"<<endl;
    }
    else
    {
        cout<<"the two numbers "<<a<<" and "<<b<< " are not equal"<<endl;
    }
    
    return 0;
}
