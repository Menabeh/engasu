#include <iostream>
#include <string>


using namespace std;

#ifndef __per__
#define    __per__
class person
{
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	person();
	person(const string & ln, const char * fn = "Heyyou"); // #2 
	void Show() const; // firstname lastname format
	void FormalShow() const;  // lastname, firstname
};

#endif