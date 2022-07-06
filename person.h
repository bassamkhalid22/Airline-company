#include<string>
using namespace std;
#pragma once
class person
{  
 private:
	 string Name;
	 int  ssn_id;
public:
	void set_name(string name);
	void set_ssn_id(int ssn);
	string get_name();
	int get_ssn_id();
};

