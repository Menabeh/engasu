#include <iostream>
#include<cstring>

using namespace std;
//9- Modify the Stock class deﬁnition (the version in stock20.h) 
//so that it has member functions that return the values of the individual data members.
//Note:A member that returns the company name should not provide a weapon for altering the array. 
	 //That is, it can’t simply return a string reference. It could return a const reference.

class Stock {
	
	private: std::string company; 
			 long shares;
			 double share_val; 
			 double total_val; 
			 void set_tot()
			 { 
				 total_val = shares * share_val;
			 }

			 public: 
				 Stock();            // default constructor 
                 Stock(const std::string & co, long n, double pr);
				  
				
				 void buy(long num, double price); 
				 void sell(long num, double price); 
				 void update(double price); 
				 void show() const;
				 
				 const Stock & topval(const Stock & s) const;
				 int numshares() const {
					 return shares;
				 } 
				 double shareval() const { 
					 return share_val;
				 } double totalval() const {
					 return total_val;
				 } 
				 const string & co_name() const {
					 return company; 
				 }
};

