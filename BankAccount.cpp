#ifndef __BANK__
#define __BANK__


#include <iostream>
#include"BankAccount.h"
#include <string>
using namespace std;

BankAccount:: BankAccount (){
	name = "unassigned";
	acctnum = "0000";        //initializing constructor;
	balance = 0;
}

void BankAccount :: show(){
	cout<<" depositor name : "<<name<<endl;
	cout<<" account number : "<<acctnum<<endl;
	cout<<" current balance : "<<balance<<endl;

}
//setters : 
void BankAccount :: set_name (string n){
	name=n;
}
void BankAccount :: set_acctnum(string an){
	acctnum=an;
}
void BankAccount :: set_balance(int b){
	balance = b;
}

//___________________________________________________________________________

void BankAccount ::deposit(double cash){
	balance = balance + cash;
}

void BankAccount ::withdraw(double cash){
	balance = balance - cash;
}



#endif