// Xana Navoichick - Assignment 4

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
	int ID;
	string FirstName;
	string LastName;
	float HoursWorked;
	float HourlyRate;
};

int main()
{
	// Get number of employees
	int getNumber = 0;
	cout << "Enter the number of employees: ";
	cin >> getNumber;

	// New employee array
	Employee* employeeList = new Employee[getNumber];

	// Populate information
	for (int i = 0; i < getNumber; i++)
	{
		cout << "Enter the ID for Employee " << i+1 << ": ";
		cin >> employeeList[i].ID;
		cout << "Enter the First Name for Employee " << i+1 << ": ";
		cin >> employeeList[i].FirstName;
		cout << "Enter the Last Name for Employee " << i+1 << ": ";
		cin >> employeeList[i].LastName;
		cout << "Enter the Hours Worked for Employee " << i+1 << ": ";
		cin >> employeeList[i].HoursWorked;
		cout << "Enter the Hourly Rate for Employee " << i+1 << ": ";
		cin >> employeeList[i].HourlyRate;
		cout << "\n";
	}

	// Generate report
	cout << "Pay Report\n";
	cout << "----------\n";
	float totalPay = 0;
	for (int i = 0; i < getNumber; i++)
	{
		// Calculate pay
		float employeePay = employeeList[i].HourlyRate * employeeList[i].HoursWorked;
		totalPay += employeePay;
		// Print information
		cout << employeeList[i].ID << ". " << employeeList[i].FirstName << " " << employeeList[i].LastName
			<< ": $" << employeePay << "\n";
	}

	// Print grand total
	cout << "\nTotal Pay: $" << totalPay;

	(void)_getch();
	return 0;
}