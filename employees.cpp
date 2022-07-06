#include<iostream>
using namespace std;
#include "employees.h"

void employees::set_salary(float sal)
{
	salary = sal;
}



void employees::set_job_Type(string job)
{   
	job_type = job;
}

void employees::set_job_Type()
{
	bool x = 1;
	string job;
	do {
		cout << "\n\n\t\t\t\t Enter the job of employee  :";
		cin >> job;
		if ((job == "manager") || (job == "engineer") || (job == "reception") || (job == "pilot") || (job == "co_pilot"))
		{
			job_type = job;
			x = 0;
		}
	} while (x);
}

float employees::get_salary()
{
	return salary;
}

string employees::get_job_Type()
{
	return job_type;
}
