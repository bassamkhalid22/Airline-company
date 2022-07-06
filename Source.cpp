#include<iostream>
#include "customers.h"
#include "employees.h"
#include "company.h"
#include<iomanip>
using namespace std;
float sumSalary=0;float SumPriceTecet = 0, sumOutputCompany = 0;
int numberemp = 0, numbercust = 0;
void official_employees(employees emp[]); 
void new_employees(employees empl[], int size); 
void Show_employee(employees empl[]);
void show_customer(customers cus[]);
void customer(customers cus[]);
void comp();
void treasury();
void  name_company();

 int main() {
	// cout << "\a";
	 string x;
	 while (x != "1234") {
		 cout << " \n\n\n\t\t\t\t\t ************************************************";
		 cout << "\n\t\t\t\t\t ************************************************";
		 cout << "  \n\n\t\t\t\t\t\t\ENTER PASSOWRD TO COME IN\n";

		 cout << " \n\n\n\t\t\t\t\t ************************************************";
		 cout << "\n\t\t\t\t\t ************************************************ \n";
		 cout << "\t\t\t\t\t ::";
		 cin >> x;
	 }cout << "ok\n"; 
	 system("cls");
	
	employees  emp[50];
	customers cust[100];
	int  choice=0;
	 do {

		 name_company();
		cout << " \n\t\t\t\t\t\t  :  Enter  your choice  :   ";
		//system("cls");
		 cin >> choice;
		

		 switch (choice) {
			 system("cls");
		 case 1:system("cls"); official_employees(emp);  break;
		 case 2: {system("cls"); customer(cust); break; }
		 case 3: {system("cls"); new_employees(emp, 50); }break;
		 case 4: {system("cls"); comp(); } break;
		 case 5: {system("cls"); show_customer(cust); } break;
		 case 6: {system("cls"); Show_employee(emp); } break;
		 case 7: {system("cls"); treasury(); } break;
		 case 0: system("exit");   break;
		 default :system("cls"); break;
		
		 }
		 
	 } while (choice != 0);
	
}

 void  name_company() {
	 // system("cls");
	 cout << " \n\n\n\t\t\t\t\t ************************************************";
	 cout << "\n\t\t\t\t\t ************************************************";
	 cout << " \n\t\t\t\t\t \t  welcom  to Yemen  Airways  company   ";

	 cout << " \n\n\n\t\t\t\t\t ************************************************";
	 cout << "\n\t\t\t\t\t ************************************************";

	 cout << " \n\n\n\n\n\n\n\t\t\t\t ====================================================================";
	 cout << "\n\t\t\t\t ====================================================================\n\n\n\n";
	 cout << "\t\t\t\t**\t Press   1   For The Current  Employees    :                   **\n \n\n";
	 cout << "\t\t\t\t** \tPress   2   to  Enter  the Customres  Record   :               ** \n \n\n ";
	 cout << "\t\t\t\t**\t Press   3   to  Record  New Employees    :                    **\n\n\n ";
	 cout << "\t\t\t\t** \tPress   4   to go to  The  Company  Output                     **\n\n\n ";
	 cout << " \t\t\t\t**\t press   5  show the new coustmers  **\n\n\n";
	 cout << " \t\t\t\t**\t press   6   to  show the new employees  **\n\n\n";
	 cout << " \t\t\t\t**\t press   7   to  Go to The  treasury Movement Of The Company  **\n\n\n";
	 cout << " \t\t\t\t**\t press  0   to Exit  The Program  :                    \t**\n\n";

	 cout << " \n\t\t\t\t ===================================================================";
	 cout << "\n\t\t\t\t ====================================================================\n\n\n\n";


 }
 void official_employees(employees emp[]) {
	 emp[0].set_name("Mohammed");
	 emp[1].set_name("Bassam");   
	 emp[2].set_name("Mahiop ");
	 emp[3].set_name("Omer");   
	 emp[4].set_name("Salah");
	 emp[0].set_ssn_id(10101010);
	 emp[1].set_ssn_id(20202020);
	 emp[2].set_ssn_id(30303030);
	 emp[3].set_ssn_id(4040404);
	 emp[4].set_ssn_id(5050050);
	 emp[0].set_job_Type("manager");
	 emp[1].set_job_Type(" enginer");
	 emp[2].set_job_Type("pilot");
	 emp[3].set_job_Type("reception");
	 emp[4].set_job_Type("co_pilot");
	 emp[0].set_salary(1500);
	 emp[1].set_salary(1000);
	 emp[2].set_salary(1000);
	 emp[3].set_salary(300);
	 emp[4].set_salary(700);
	 //sumSalary = emp[0].set_salary(1500) + emp[1].set_salary(1500) + emp[2].set_salary(1500) + emp[3].set_salary(1500) + emp[4].set_salary(1500);
	 for (int i = 0; i < 5; i++) {

		 cout << "\t\t\t\t\t=======================================\n";
		 cout << "\n\n \t\t\t\t    employee  Name : " << emp[i].get_name() << endl;
		 cout << "\n\n \t\t\t\t     job type  is : " << emp[i].get_job_Type() << endl;
		 cout << " \n\n\t\t\t\t     Salary  is : " << emp[i].get_salary() << "$" << endl;
		 cout << "\n\n \t\t\t\t     SSN  is : " << emp[i].get_ssn_id() << endl;
		 cout << "\n\n\t\t\t\t==================================\n";
	 }
 }
 void new_employees(employees empl[], int size) {

	 string name; sumSalary = 4500; int  z = 0; char exit; 
	 cout << " \n\n \t\t\t  The Jobs are Available  is  \n";
	 cout << " \t\t\t\t------------------------------------------------------\n";
	 cout << "\t\t\t\t |manager | engineer  | reception | pilot | co_pilot | \n";
	 cout << "\t\t\t\t------------------------------------------------------\n";
	
	 for (int i = 0; i <10; i++) {
		 cout << "\n\n\t\t\t\tEnter x to Add New Employee or Press any key to Exit ";
		 cin >> exit;
		 if (exit == 'x') {
			 numberemp=++ z;
			 //cout << "\n\n\t\t\t\tEnter The Employee Name " << i + 1 << " : ";
			
			// cout << "\n\n \t\t\t\tThe Employees Number is " << z << endl;
			 cout << "\n\n\t\t\t\t Enter the Employee name :: " << z << "  name  : ";
			 cin >> name;
			 empl[i].set_name(name);
			 empl[i].set_job_Type();
			 float ssn;
			 do {
				 cout << "\n\n\t\t\t\tEnter The Employee ssn  :  ";
				 cin.exceptions(cin.failbit);
				 try {
					 cin >> ssn;
					 if (ssn > 0) {
						 empl[i].set_ssn_id(ssn);
					 }
					 else
					 {
						 throw "cannot accept this number";

					 }
				 }
				 
				 catch (...)
				 {
					 cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct Employee ssn   : ";
					 cin.clear();
					 z--;
					 char rr[3];
					 cin >> rr;
					 i--;
				 }
			 } while (ssn <= 0);
			 //  «·›Õ’  «·—« » 
			 cout << "\n\n\t\t\t\tEnter the employee salary  : ";
			 float salary;
			 do {

				 cin.exceptions(cin.failbit);
				 try {
					 cin >> salary;
					 if (salary > 0) {
						 empl[i].set_salary(salary);
					 }
					 else
					 {
						 throw "cannot accept this number";
					 }
				 }
				 catch (char* Error)
				 {
					 cerr << Error << endl;
				 }
				 catch (...)
				 {
					 cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct Employee salary   : ";
					 cin.clear();
					 z--;
					 char rr[3];
					 cin >> rr;
					 i--;
				 }
			 } while (salary <= 0);
		 }
		 else
			 break;
		 sumSalary += empl[i].get_salary();
	 }system("cls");
	 
 }
 void Show_employee(employees empl[]) {
	 cout << "\t\t\t\t==================================\n";
	 for (int i = 0; i < numberemp; i++) {

		 cout << "\n\n \t\t\t\t    employee  Name : " << empl[i].get_name() << endl;
		 cout << "\n\n \t\t\t\t     job type  is : " << empl[i].get_job_Type() << endl;
		 cout << " \n\n\t\t\t\t     Salary  is : " << empl[i].get_salary() << "$" << endl;
		 cout << "\n\n \t\t\t\t     SSN  is : " << empl[i].get_ssn_id() << endl;
		 cout << "\n\n\t\t\t\t==================================\n";
	 }
 }
 void show_customer(customers cus[]) {
	 int price_A = 1000, price_B = 750;
	 cout << "\t\t\t\t==================================\n";
	 for (int i = 0; i < numbercust; i++) {
		 cout << "\n\n \t\t\t\t--------------------------------\n";
		 cout << " \n\t\t\t\t\t customer  number " << i + 1 << "    information  :\n";
		 cout << "\n\n \t\t\t\t customer name is  :" << cus[i].get_name() << endl;
		 cout << " \n\n\t\t\t\t customer SSN is  :" << cus[i].get_ssn_id() << endl;
		 cout << "\n\n\t\t\t\t tecket number for the  customer is   :" << cus[i].getTicket_id() << endl;
		 if (cus[i].getSeat_type() == 1)
			 cout << "\n\n\t\t\t\t  the price of your seat type you was choice is:" << price_A << " $"/*cus[i].getSeat_type()*/ << endl;
		 if (cus[i].getSeat_type() == 2)
			 cout << "\n\n\t\t\t\t  the price of your seat type choice is  :" << price_B << " $" << endl;
		 cout << "\n\t\t\t\t==================================\n";
	 }
 }
 void customer(customers cus[]) {
	 int size=0;  string name;
	 int price_A = 1000, price_B = 750; char exit; 
	
	 for (int i = 0; i < 100; i++) {
		 cout << "\n\n\t\t\t\tEnter x to Add New Customer or Press any key to Exit ";
		 cin >> exit;
		 if (exit == 'x') {
			 numbercust= ++size;
			 cout << " \n\n\t\t\t\t\----------------------------\n";
			 cout << " \n\t\t\t\t\t customer  number " << i + 1 << "    information  :\n";

			 cout << " \n\n\t\t\t\t\tEnter  the customer Name  : ";
			 cin >> name;
			 cus[i].set_name(name);
			 //«·›Õ’  ·—ﬁ„ «·Êÿ‰Ì 
			 float ssn;
			 do {

				 cout << " \n\n\t\t\t\t\t Enter customer SSN  :  ";
				 cin.exceptions(cin.failbit);

				 try {
					 cin >> ssn;
					 if (ssn > 0) {
						 cus[i].set_ssn_id(ssn);
					 }
					 else
					 {
						 throw "cannot accept this number";
						 cout << "\nerror ssn" << ssn << endl;
					 }
				 }
				 catch (char* Error)
				 {
					 cerr << Error << endl;
				 }

				 catch (...)
				 {
					 cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct customer SSN  : ";
					 cin.clear();
					 char rr[3];
					 cin >> rr;
					 i--;
				 }
			 } while (ssn <= 0);
			 //  «·›Õ’  —ﬁ„ «·›Ì“… 
			 float  tick_id;
			 do {
				 cout << " \n\n\t\t\t\t\t Enter  tecket number for the  customer  : ";
				 cin.exceptions(cin.failbit);
				 try {
					 cin >> tick_id;
					 if (tick_id > 0) {
						 cus[i].setTicket_id(tick_id);
					 }
					 else
					 {
						 throw "cannot accept this number";
					 }
				 }
				 catch (char* Error)
				 {
					 cerr << Error << endl;
				 }
				 catch (...)
				 {
					 cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct tecket number for the  customer  : ";
					 cin.clear();
					 char rr[3];
					 cin >> rr;
					 i--;
				 }
			 } while (tick_id <= 0);
			 //    «·›Õ’  ·‰Ê⁄ «·„ﬁ⁄œ 

			 int seat;
			 do {
				 cout << "\n\n\t\t\t\t Enter  1  for Luxurios seat or 2 for plain Seat  :";
				 cin.exceptions(cin.failbit);
				 try {
					 cin >> seat;
					 if ((seat == 1) || (seat == 2)) {
						 cus[i].setSeat_type(seat);
					 }
					 else
					 {
						 throw "cannot accept this number";

					 }
				 }
				 catch (char* Error)
				 {
					 cerr << Error << endl;
				 }

				 catch (...)
				 {
					 cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct 1  for Luxurios seat or 2 for plain Seat  : ";
					 cin.clear();
					 char rr[3];
					 cin >> rr;
					 i--;
				 }
			 } while (seat <= 0);
			 if (cus[i].getSeat_type() == 1) {
				 SumPriceTecet += price_A;
			 }
			 else if (cus[i].getSeat_type() == 2) {
				 SumPriceTecet += price_B;

			 }system("cls");
		 }
		 else 
		 break;
	 }
 }
 void comp() {
	 company com;
	 char exit;
	 for (int i = 0; i < 10; i++) {
		 cout << "\n\n\t\t\t\t  Enter x to excout outputs   or any key to exit ::";
		 cin >> exit;
		 if (exit == 'x') {

			 cout << "\n\n \t\t\t\tEnter the price of plane fule  : ";
			 com.set_PlaneFule();
			 cout << "\n\n \t\t\t\tEnter The Rent Runway  : ";
			 com.set_Rent();
			 cout << "\n\n\t\t\t\tEnter the Amount of miscellaneous  : ";
			 com.set_Miscella();
			 system("cls");
			 cout << "\n\t\t\t\t==================================\n";
			 cout << "\n\n\t\t\t\t  the price of plane fule is : " << com.get_PlaneFule() << " $" << endl;
			 cout << "\n\n\t\t\t\t  The Rent Runway is : " << com.get_Rent() << " $" << endl;
			 cout << "\n\n\t\t\t\t  the Amount of miscellaneous is : " << com.get_Miscella() << " $" << endl;
			 cout << "\n\t\t\t\t==================================\n";
			 sumOutputCompany = com.get_PlaneFule() + com.get_Rent() + com.get_Miscella();
		 }
		 else
			 break;
	 }
 }
 void treasury() {

	 char exit;
	 for (int i = 0; i < 10; i++) {
		 cout << "\n\n\t\t\t\t  Enter x excout   or any key to exit ::";
		 cin >> exit;
		 if (exit == 'x') {
			 float result;
			 cout << "\n\n\t\t\t\t\ ----------------------------------------------";
			 cout << "\n\t\t\t\t |The Sumattion Of Employees Salaryes : " << "( " << sumSalary << " )  |";
			 cout << "\n\t\t\t\t\ ---------------------------------------------";
			 cout << "\n\n\t\t\t\t\ -------------------------------------------";
			 cout << "\n\t\t\t\t| The Sumattion Of Teckets prices : " << " ( " << SumPriceTecet << " )  |";
			 cout << "\n\t\t\t\t\ -------------------------------------------";
			 cout << "\n\n\t\t\t\t\ ---------------------------------------------";
			 cout << "\n\t\t\t\t| The Sumattion Of Utputs Of Company : " << "( " << sumOutputCompany << " ) ";
			 cout << "\n\t\t\t\t\ ----------------------------------------------";
			 cout << "\n\n\t\t\t\t\ ------------------------------------------";
			 result = sumSalary + sumOutputCompany;
			 cout << "\n\t\t\t\t| Trip Profits" << "(  " << SumPriceTecet - result << " )  |";
			 cout << "\n\t\t\t\t\ ----------------------------------------";
		 }
		 else
			 break;
	 }
 }