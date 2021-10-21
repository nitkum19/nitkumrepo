#pragma once

class PayrollSEE
{
public:
	double calculatepayrollSEE(double days);
	void get_SEE_details();
	void show_SEE_details();
	char name[50];
	char lastname[50];
	char middlename[50];
	int days{};
	double HRA = 34000;
	double BASIC = 69000;
	double VARIABLE = 44000;
};

class PayrollManager
{
public:
	void get_Manager_details();
	void show_Manager_details();
	double calculatepayroll2(double days);
	char name [50];
	char lastname [50];
	char middlename [50];
	int days{};
	double HRA = 54000;
	double BASIC = 70000;
	double VARIABLE = 48000;
};

class PayrollSE
{
public:
	void get_SE_details();
	void show_SE_details();
	double calculatepayrollSE(double days);
	char name[50];
	char lastname[50];
	char middlename[50];
	int days{};
	double HRA = 13000;
	double BASIC = 40000;
	double VARIABLE = 22000;
};
