/*
2. Array Of Object (Bank Management System) Requirements(A/C Number , A/C Name , A/C Type , A/C Branch ,
A/C Balance ) Search Record By A/C Number.
Output:
enter account number: 568245
enter account name: aman
enter account type: saving
enter account branch: 4
enter account balance: 10000


The account number is: 568245
The account name is: aman
The account type is: saving
The account branch is: 4
The account balance is: 10000
*/

#include<iostream>
using namespace std;


	
class System{
	
	 private:
	 	int a,balance,branch,i,n;
	 	char name[50];
	 	char type[50];
	 	
	
	 public:
		
		void set(){
		
			
			for(i=1;i<=n;i++){
				
			}
			cout<<"enter account number: ";
			cin>>a;
			cout<<"enter account name: ";
			cin>>name;
			cout<<"enter account type: ";
			cin>>type;
			cout<<"enter account branch: ";
			cin>>branch;
			cout<<"enter account balance: ";
			cin>>balance;
		}
		void get(){
			cout<<endl<<endl;
			cout<<"The account number is: "<<a<<endl;
			cout<<"The account name is: "<<name<<endl;
			cout<<"The account type is: "<<type<<endl;
			cout<<"The account branch is: "<<branch<<endl;
			cout<<"The account balance is: "<<balance<<endl;
		}
	 
		
};
int main(){
	System s1;
	s1.set();
	s1.get();		
}
