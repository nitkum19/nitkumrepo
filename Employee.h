#pragma once

class employee
{
	char  NAME[50];
	char lastname[50];
	float BASIC;
	float HRA;
	float Variable;
	float TAX;
	float Net;
	int   ID;
	int days;
public:
    void get_emp_details();
	float find_Net(float BASIC, float HRA, float TAX,float Variable);
	void show_emp_details();
};

