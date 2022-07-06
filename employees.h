#include<string>
using namespace std;
#pragma once
#include "person.h"
class employees :
	public person
{ private:
 float  salary;
string job_type;
public:
	void set_salary(float sal);
	
	void set_job_Type(string job);
	void set_job_Type();
	float get_salary();
	string get_job_Type();
};

