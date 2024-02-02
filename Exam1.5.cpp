/*5. Write a Program to handle ambuigity error in Hybrid inheritance.*/

#include<iostream>
using namespace std;
	
class A{
	
	 public:
		void set(){
		
		cout<<"A"<<endl;
}
};
class B;public A
{
	
	 public:
	 	void set(){
		 
	 	cout<<"B"<<endl;
}
	
};
class C: public B, public A
{
	
	 public:
		void set(){
		
	 	cout<<"C"<<endl;
}
	
};
int main(){
	
	
}
