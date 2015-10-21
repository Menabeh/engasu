//question 5:
//5. Deﬁne a class to represent a bank account. :
#include <iostream>
#include<cstring>
using namespace std;

// class definition 
class BankAccount { 
private :
		char name[40];
		char acctnum[25];  // or std::string acctnum; 
		double balance;

		public: 
			BankAccount(const char * client, const char * num, double bal = 0.0); 
			void show(void) const; 
			void deposit(double cash); 
			void withdraw(double cash);


};

