/*
4. Write a Program which illustrates Method Overriding by using three classes.
Output:
Method from class A
Method from class B
Method from class C
*/

#include<iostream>
using namespace std;
	
class A{
	
	 public:
		void set(){
		
		cout<<"Method from class A"<<endl;
}
};
class B
{
	
	 public:
	 	void set(){
		 
	 	cout<<"Method from class B"<<endl;
}
	
};
class C: public B, public A
{
	
	 public:
		void set(){
		
	 	cout<<"Method from class C"<<endl;
}
	
};
int main(){
	C c1;
	c1.A::set();
	c1.B::set();
	c1.C::set();
	
			
}
