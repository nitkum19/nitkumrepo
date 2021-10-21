#include "Employee.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <vector>
void employee::get_emp_details()
{
	std::cout << "\nEnter employee First & Last name: ";
	std::cin >> NAME >> lastname;
	std::cout << "\nEnter employee ID: ";
	std::cin >> ID;
	std::cout << "\nEnter employee BASIC component: ";
	std::cin >> BASIC;
	std::cout << "\nEnter employee HRA: ";
	std::cin >> HRA;
	std::cout << "\nEnter employee Variables: ";
	std::cin >> Variable;
	std::cout << "\nEnter employee TAX to Deducted for this month: ";
	std::cin >> TAX;
	std::cout << "\nEnter working days for the employee: ";
	std::cin >> days;
	
}
float employee::find_Net(float BASIC, float HRA, float TAX,float Variable)
{
	return ((BASIC + HRA + Variable) - TAX)/30 * days;
}
void employee::show_emp_details()
{
	std::cout << "\n\n**** Details of  Employee ****";
	std::cout << "\nEmployee Name      :  " << NAME;
	std::cout << "\nEmployee ID        :  " <<ID;
	std::cout << "\nBasic salary       :  " << BASIC;
	std::cout << "\nVariables          :  " << Variable;
	std::cout << "\nEmployee HRA       :  " << HRA;
	std::cout << "\nIncome Tax         :  " << TAX;
	std::cout << "\nNet Salary         :  " << find_Net(BASIC, HRA, TAX,Variable);
	std::cout << "\n-------------------------------\n\n";
	std::ofstream myfile;
	myfile.open("PayrollDetails.txt", std::ofstream::app);
	if (myfile.is_open())
	{
		myfile << std::setw(1) <<"\n\n**** Details of  Employee**** ";
		myfile << std::setw(10) <<"\nEmployee Name: " << NAME ;
		myfile << std::setw(10) <<"\nEmployee ID: " << ID ;
		myfile << std::setw(5) <<"\nBasic Salary: " << BASIC;
		myfile << std::setw(5) << "\nVariables  : " << Variable;
		myfile << std::setw(5) <<"\nEmployee HRA: " << HRA;
		myfile << std::setw(5) <<"\nIncome Tax: " << TAX;
		myfile << std::setw(5) <<"\nNet Salary: " << find_Net(BASIC, HRA, TAX,Variable);
		std::cout << "\n-------------------------------\n\n";
		myfile.close();
	}
	std::cout << "Adding details to the file \n";
	std::cout << "\n";
	myfile << "Writing this to a file.\n";
	myfile.close();
}



