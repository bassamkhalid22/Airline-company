#include<iostream>
#include "company.h"
using namespace std;
void company::set_PlaneFule()
{
	float fule;
	do {
		
		cin.exceptions(cin.failbit);
		try {
			cin >> fule;
			if (fule > 0) {
				plane_fule = fule;
			}
			else
			{
				throw "cannot accept this number";
			}
		}
	
		catch (...)
		{
			cout << " \n\n\t\t\t\t\t  wrong Entry enter correct  : ";

		}
	} while (fule <= 0);
}

void company::set_Miscella()
{
	float mis;
	do {
		
		cin.exceptions(cin.failbit);
		try {
			cin >> mis;
			if (mis > 0) {
				miscella = mis;
			}
			else
			{
				throw "cannot accept this number";
			}
		}
		
		catch (...)
		{
			cout << " \n\n\t\t\t\t\t  wrong Entry enter correct  : ";

		}
	} while (mis <= 0);
}
void company::set_Rent()
{
	float rent;

	do {
		//cout << " \n\n\t\t\t\t\t Enter customer SSN  :  ";
		cin.exceptions(cin.failbit);

		try {
			cin >> rent;
			if (rent > 0) {
				_rent = rent;
			}
			else
			{
				throw "cannot accept this number";
				//cout << "\nerror ssn" << ssn << endl;
			}
		}
		
		catch (...)
		{
			cout << " \n\n\t\t\t\t\t  wrong Entry enter correct : ";	
		}
	} while (rent <= 0);
}

float company::get_PlaneFule()
{
	return plane_fule;
}

float company::get_Rent()
{
	return _rent;
}

float company::get_Miscella()
{
	return miscella;
}


	
