 
#include "Payroll.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <conio.h>

void PayrollSEE::get_SEE_details()
{
    std::cout << "Enter First & Last Name of the SEE. \n";
    std::cin >> name >> lastname;
    std::cout << "\n";
    std::cout << "Enter total working days for the employee. \n";
    std::cin >> days;
}
double PayrollSEE::calculatepayrollSEE(double days)
{
    return ((HRA + BASIC + VARIABLE) / 30) * days;
}
void PayrollSEE::show_SEE_details()
{
    std::cout << "Working on it ....\n";
    std::cout << "\n";
    std::cout << "Calculated pay for " << name << " " << lastname << " for this month is INR " << calculatepayrollSEE(days) << "\n";
    std::cout << "\n";
    std::cout << "Adding these details to a file for later reference: ";
    std::ofstream myfile;
    myfile.open("PayrollDetails.txt", std::ofstream::app);
    if (myfile.is_open())
    {
        myfile << std::setw(1) <<"\n\n**** Details of  Payroll**** ";
        myfile << std::setw(10) <<"\nName of the SEE: " << name << lastname;
        myfile << std::setw(1) <<"\nCalculated payroll for the SEE: " << calculatepayrollSEE(days);
    }
}

//======================================================================================//

    void PayrollManager::get_Manager_details()
{
    std::cout << "Enter First & Last Name of the Manager. \n";
    std::cin >> name >> lastname;
    std::cout << "\n";
    std::cout << "Enter total working days for the employee. \n";
    std::cin >> days;
    std::cout << "\n";
}
double PayrollManager::calculatepayroll2(double days)
{
        return ((HRA + BASIC + VARIABLE) / 30) * days;
    
}

void PayrollManager::show_Manager_details()
{
    std::cout << "Working on it ....\n";
    std::cout << "\n";
    std::cout << "Calculated pay for " << name << " " << lastname << " for this month is INR " << calculatepayroll2 (days) << "\n";
    std::cout << "Adding these details to a file for later reference: ";
    std::ofstream myfile;
    myfile.open("PayrollDetails.txt", std::ofstream::app);
    if (myfile.is_open())
    {
        myfile << std::setw(1) <<"\n\n**** Details of  Payroll**** ";
        myfile << std::setw(10) <<"\nName of the Manager: " << name << lastname;
        myfile << std::setw(1) <<"\nCalculated payroll for the Manager: " << calculatepayroll2(days);
    }
}

//======================================================================================//

void PayrollSE::get_SE_details()
{
    std::cout << "Enter First & Last Name of the SE. \n";
    std::cin >> name >> lastname;
    std::cout << "\n";
    std::cout << "Enter total working days for the employee. \n";
    std::cin >> days;
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
}
double PayrollSE::calculatepayrollSE(double days)
{
    return ((HRA + BASIC + VARIABLE) / 30) * days;
}
void PayrollSE::show_SE_details()
{
    std::cout << "Working on it ....\n";
    std::cout << "\n";
    std::cout << "Calculated pay for " << name << " " << lastname << " for this month is INR " << PayrollSE::calculatepayrollSE(days) << "\n";
    std::cout << "\n";
    std::cout << "Adding these details to a file for later reference: ";
    std::ofstream myfile;
    myfile.open("PayrollDetails.txt", std::ofstream::app);
    if (myfile.is_open())
    {
        myfile << std::setw(1) <<"\n\n**** Details of  Payroll****";
        myfile << std::setw(10) <<"\nName of the SE: " << name << lastname;
        myfile << std::setw(1) <<"\nCalculated payroll for the SE: " << calculatepayrollSE(days);
    }
}


