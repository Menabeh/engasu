#include "person.h"
#include <string>

person :: person (){
	lname = ""; 
	fname[0] = '\0';
}
  


person::person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname,fn);
}
 

 
void person::Show() const
{
    std::cout << "n" << fname << " " << lname;
}
 
void person::FormalShow() const
{
    std::cout << "n" << lname << ", " << fname;
}