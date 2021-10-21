#include "Employee.h"
#include "Payroll.h"
#include <conio.h>
#include<windows.h>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
    char name [50];
    char lastname[50];
    char middlename[50];
    int daysworked{};
    char age{};
    int FirstInput;
    double a{};
    char b [50];
    double c{};
    char d[50];
    int role{};
    int z{};
    char emp = 0;
    double pay = 0.0;
    double days = 0.0;
    int mon = 2 ;
    double HRA = 0.0;
    double BASIC = 0.0;
    double VARIABLE = 0.0;
    std::cout << std::setw(200) << "Welcome to Payroll Mangement System (PMS)\n";
    std::cout << std::setw(69) << "Press Enter to continue\n";
    std::cin.ignore();
    std::cout << "                                                 PMS helps you to:\n";
    std::cout << "\n";
    std::cout << "                    *** Perform payroll calculations based on number of days your employee has worked*** \n";
    std::cout << "                                      *** Manage employees in your organisation***\n";
    std::cin.ignore();
    while (true)
    {
        std::cout << "\n";
        std::cout << "Main Menu :-  \n";
        std::cout << "1. Calculate Payroll (Using pre-defined values) \n";
        std::cout << "2. Calculate Payroll (Using custom values for HRA, Variables, Basic & working days to calculate) \n";
        std::cout << "3. Employee Management\n";
        std::cout << "4. Exit the app\n";
        std::cout << "\n";
        std::cout << "Enter your input by entering 1,2,3,4  \n";
        std::cout << "\n";
        std::cout << "Waiting on your input: \n";
        std::cout <<"-> ";std::cin >> FirstInput;
        std::cin.ignore();
        std::cout << "\n";
       while (FirstInput == 1)
        {
            std::cout << "What is the role of the employee? \n";
            std::cout << "\n";
            std::cout << "1. Manager\n";
            std::cout << "2. SEE \n";
            std::cout << "3. SE \n";
            std::cout << "\n";
            std::cout << "Waiting on your input: \n";
            std::cout <<"-> ";std::cin >> role;
            std::cout << "\n";
            if (role == 1)
            {
                PayrollManager M;
                M.get_Manager_details();
                M.show_Manager_details();
                std::cout << "\n";
                std::cout << "Routing back to Main Menu \n";
                std::cout << "\n";
                Sleep(1000);
                break;
            }
                                
            if (role == 2)
            {
                PayrollSEE SEE;
                SEE.get_SEE_details();
                SEE.show_SEE_details();
                std::cout << "\n";
                std::cout << "Routing back to Main Menu \n";
                std::cout << "\n";
                Sleep(1000);
                break;
              
            }
            if (role == 3)
            {
                PayrollSE SE;
                SE.get_SE_details();
                SE.show_SE_details();
                std::cout << "\n";
                std::cout << "Routing back to Main Menu \n";
                std::cout << "\n";
                Sleep(1000);
                break;
            }
        }
       if (FirstInput == 2)
       {
          employee E;
          E.get_emp_details();
          E.show_emp_details();
          Sleep(1000);
          std::cout << "Routing back to Main Menu \n";
          std::cout << "\n";
          Sleep(1000);
          
        }
        if (FirstInput == 3)
        {
            std::cout << "You have the ability to perform the tasks given below: \n";
            std::cout << "\n";
            std::cout << "1. Add employee  \n";
            std::cout << "2. Show employees \n";
            std::cout << "3. Show payrolls calculated using option 1 & 2 in the main menu  \n";
            std::cout << "4. Delete or Edit employee details  \n";
            std::cout << "\n";
            std::cout << "Waiting on your input: \n";
            std::cout <<"-> ";std::cin >> a;
            std::cout << "\n";
            std::cin.ignore();
            if (a == 1)
            {
                std::cout << "Enter name of the employee you wish to add: \n";
                std::cin >> b >> middlename;
                std::cout << "\n";
                std::cout << "Employee ID : \n";
                std::cin >> c;
                std::cout << "\n";
                std::cout << "Floor : \n";
                std::cin >> d;
                std::cout << "\n";
                std::ofstream myfile;
                myfile.open("EmpDetails.txt" , std::ofstream::app);
                if (myfile.is_open())
                {
                    myfile <<std::setw(10)<< "Employee Name: " << b << " " << middlename <<"\n" ;
                    myfile <<std::setw(10)<< "Employee ID: " << c << "\n";
                    myfile <<std::setw(5)<<"Floor: " << d << "\n";
                    myfile.close();
                }
                myfile << "Writing this to a file.\n";
                myfile.close();
                std::cout << "Employee Name: " << b << " " <<middlename << " with employee ID: " << c << " & floor " << d << " added to the records.\n";
                std::cout << "\n";
                std::cin.ignore();
                std::cout << "Routing back to Main Menu \n";
                std::cout << "\n";
                Sleep(1000);
                
            }
            if (a == 2)
            {
               std::cout << "Please find details below: \n";
               std::cout << "\n";
               std::string line;
               std::ifstream myfile("EmpDetails.txt");
               if (myfile.is_open())
                {
                    while (getline(myfile, line))
                    {
                        std::cout << line << '\n';
                        std::cout << "\n";
                    }
                    myfile.close();
                    Sleep(1000);
                    std::cout << "Routing back to Main Menu \n";
                    std::cout << "\n";
                    Sleep(1000);
                }
               
                else std::cout << "There is no employee registered as of now.\n";
                std::cout << "\n";
                std::cout << "Routing back to Main Menu \n";
                std::cout << "\n";
                Sleep(1000);
                
            }
            if (a == 3)
            {
                std::cout << "Please find details below: \n";
                std::cout << "\n";
                std::string line;
                std::ifstream myfile("PayrollDetails.txt");
                if (myfile.is_open())
                {
                    while (getline(myfile, line))
                    {
                        std::cout << line << '\n';
                        std::cout << "\n";
                    }
                    myfile.close();
                    Sleep(1000);
                    std::cout << "Routing back to Main Menu \n";
                    std::cout << "\n";
                    Sleep(1000);
                }
            }

            if (a == 4)
            {
                std::cout << "Still working on this , next release should have this included \n";
                std::cout << "\n";
                std::cout << "Routing back to Main Menu \n";
                std::cout << "\n";
                Sleep(1000);
            }
              
         
            
        }
        
        if (FirstInput == 4)
        {
            std::cout << "THANKS FOR USING 'PMS' SEE YOU SOON\n";
            std::cout << "\n";
            std::cout << "\n";
            break;
        }
            

    }
    return 0;
}



