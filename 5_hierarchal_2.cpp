#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class Employee
{
public:
    char name[50];
    int id;
    int salary;
};
class Regular : public Employee
{
public:
    int da, hra, basic_salary;

public:
    void input()
    {
        cout << "Enter the Name of the Employee\n";
        cin >> name;
        cout << "Enter the ID of Employee\n";
        cin >> id;
        cout << "Enter the Basic Salary of the Employee\n";
        cin >> basic_salary;
    }
    void salary_regular()
    {
        hra = basic_salary * 0.1;
        da = basic_salary * 0.4;
        salary = basic_salary + da + hra;
    }
    void display()
    {
        cout << "NAME : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "The salary of the employee is =" << salary << endl;
    }
};
class part_time : public Employee
{
    int number_of_hour;
    int pay_per_hour;

public:
    void input()
    {
        cout << "Enter the name of the employee\n";
        cin >> name;
        cout << "Enter the ID of employee\n";
        cin >> id;
        cout << "Enter the number of hour worked\n";
        cin >> number_of_hour;
        cout << "Enter the amount to be paid per hour\n";
        cin >> pay_per_hour;
    }
    void salary_per_hour()
    {
        salary = pay_per_hour * number_of_hour;
    }
    void display()
    {
        cout << "NAME : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "The salary of the daily basis worker is = " << salary << endl;
    }
};
int main()
{
    Regular emp1;
    part_time emp2;
    emp2.input();
    emp2.salary_per_hour();

    emp1.input();
    emp1.salary_regular();
    emp1.display();
    emp2.display();
    return 0;
}