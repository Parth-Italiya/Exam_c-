/*
1. Write a C++ program to print factorial series using recursion.
Output:
enter a number: 3
the factorial of number is: 6
*/
#include<iostream>
using namespace std;
	
class Factorial{
	
	private: 
	 
	 int a,n;
	 int b;
	 
	 public:
		
		void set(){
			cout<<"enter a number: ";
			cin>>n;
		}
		void get(){
			cout<<"the factorial of number is: "<<n*(n-1)*(n-2);
		}
	
};
int main(){
	Factorial f1;
	f1.set();
	f1.get();		
}
