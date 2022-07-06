#pragma once
#include "person.h"
class customers :
	public person
{ 
private:
	 float ticket_id;
	int  seat_type;
public:
	void setTicket_id( float id);
	void setSeat_type( int set);
	float getTicket_id();
	int getSeat_type();
};

