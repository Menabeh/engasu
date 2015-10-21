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
			//7. Provide code for a constructor for the bank account class from Chapter Review Question 5.
		 BankAccount(const char * client, const char * num, double bal) {
			strncpy(name, client, 39);
			name[39] = '\0';
			strncpy(acctnum, num, 24);
			acctnum[24] = '\0';
			balance = bal; 
		}
			void show(void) const; 
			void deposit(double cash); 
			void withdraw(double cash);


};

