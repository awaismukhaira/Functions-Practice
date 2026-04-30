#include<iostream>
using namespace std;
//Prototype
double finalSalary(double salary, double bonus = 5000);
int main(){
    double salary, bonus, finalsalary;
    char choice;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"Do you want to add custom bonus(y/n): ";
    cin>>choice;
    if(choice=='y'){
    cout<<"Enter bonus: ";
    cin>>bonus;
    finalsalary=finalSalary(salary, bonus);
    }
    else
    finalsalary=finalSalary(salary);
    cout<<"Final Salary: "<<finalsalary;
    return 0;
}
double finalSalary(double salary, double bonus){
    return salary+bonus;
}
