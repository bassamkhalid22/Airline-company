#include <iostream>
using namespace std;
#include "person.h"

void person::set_name(string name)
{
	Name  = name;
	
}

void person::set_ssn_id(int ssn)
{
	ssn_id  = ssn;
}


string person::get_name()
{
	return Name ;
}

int person::get_ssn_id()



{
	return ssn_id;
}
