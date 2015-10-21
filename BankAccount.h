//question 5:
//5. Deﬁne a class to represent a bank account. :
#include <iostream>
#include<cstring>
using namespace std;

// class definition 
class BankAccount { 
private :
		string name;
		string acctnum;  // or std::string acctnum; 
		double balance;

		public: 

			BankAccount(); 
			void BankAccount :: set_name(string n);
			void BankAccount :: set_acctnum(string an);
			void BankAccount :: set_balance(int b);
			void show(void) ; 
			void deposit(double cash); 
			void withdraw(double cash);


};

