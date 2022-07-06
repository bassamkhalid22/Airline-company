#include<iostream>
using namespace std;
#include "customers.h"

void customers::setTicket_id(float id)
{
	ticket_id = id;
}

void customers::setSeat_type(int set)
{
	seat_type = set;
}



float customers::getTicket_id()
{
	return ticket_id;
}

int customers::getSeat_type()
{
	return seat_type;
}
