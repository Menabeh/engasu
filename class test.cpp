#include <iostream>
#include"BankAccount.h"
#include <string>
using namespace std;


void main(){

	BankAccount B1;
	 cout<<" Hi your accout now is : "<<endl;
	 B1.show();

	 while (1){
		 cout<<" press 1 to enter new bank account : "<<endl;
		 int inp;
		 cin>>inp;
		 if(inp == 1){
			 BankAccount B2;
		string nam;
		string acctnumbr;
		int bal;
			 cout<<"please enter all its data in order name , account number , balance separated by'ENTER KEY '"<<endl;

			 cin>>nam>>acctnumbr>>bal;
 

			 B1.set_name(nam);
			 B1.set_acctnum(acctnumbr);
			 B1.set_balance(bal);

			 cout<<"the bank account you entered : "<<endl;
			 B1.show();

			char inp1;
		 cout<<"enter D for depositing or W for withdrawing from its balance "<<endl;
		 cin>>inp1;
		  int c;

		 if(inp1 == ('D'| 'd')){
			
			 cout<<"enter amount of deposit cash : "<<endl;
			 cin>>c;
			 B1.deposit(c);
			 B1.show();
		 }
		 else if (inp1 ==('W' | 'w')){
			 cout<< "enter amount of cash to withdraw :" <<endl;
			 cin>>c;
			 B1.withdraw(c);
			 B1.show();

		 }
		

		 
		 
		 
		 }
		 
	   }
}