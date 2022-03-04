#include<iostream>
using namespace std;
struct Address
{
	char HouseNo[25];
	char City[25];
	char PinCode[25];
};
struct Employee
{
	int Id;
	char Name[25];
	float Salary;
	struct Address Add;
};
int main()
{
	int i;
	Employee E;
	cout << "Enter Employee Id : " << endl;
	cin >> E.Id;
	cout << "Enter Employee Name : " << endl;
	cin >> E.Name;
	cout << "Enter Employee Salary : " << endl;
	cin >> E.Salary;
	cout << "Enter Employee House No : " << endl;;
	cin >> E.Add.HouseNo;
	cout << "Enter Employee City : " << endl;
	cin >> E.Add.City;
	cout << "Enter Employee House No : " << endl;
	cin >> E.Add.PinCode;
	cout << "Details of Employees" << endl;
	cout << "Employee Id : " << E.Id << endl;
	cout << "Employee Name : " << E.Name << endl;
	cout << "Employee Salary : " << E.Salary << endl;
	cout << "Employee House No : " << E.Add.HouseNo << endl;
	cout << "Employee City : " << E.Add.City << endl;
	cout << "Employee House No : " << E.Add.PinCode << endl;
	return 0;
}