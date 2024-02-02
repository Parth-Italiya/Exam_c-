/*
3. Give an example which shows Exception handling of division by zero exception.
Output:
Enter value of a: 15
can't devide with the number zero
*/
#include<iostream>
using namespace std;
	
class Exception{
	
	private: 
	 
	 int a,c,x;
	 int b=0;
	 
	 public:
	 	void set(){
	 		cout<<"Enter value of a: ";
	 		cin>>a;
		 }
};

try{
	c=a/b;
	
	throw 7;
}
catch(int x){
	cout<<"can't devide the number with zero";
};

int main(){
	Exception e1;
	e1.set();		
}
