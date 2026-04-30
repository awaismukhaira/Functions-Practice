#include <iostream>
using namespace std;
double calculatepercent(double attend, double total){
    double percent;
    percent=(attend/total)*100;
    return percent;
}
char checkEligibility(double percent){
    char eligibility;
    if(percent>=75){
        eligibility='y';
    }
    else
    eligibility='n';
    return eligibility;
}
int main(){
    int attendclass,totalclass;
    double percent;
    char eligible;
    cout<<"Enter Attend Classes: ";
    cin>>attendclass;
    cout<<"Enter Total Classes: ";
    cin>>totalclass;
    percent=calculatepercent(attendclass,totalclass);
    eligible=checkEligibility(percent);
    cout<<"Attendance percentage: "<<percent<<endl;
    if(eligible=='y')
    cout<<"Eligibile";
    else
    cout<<"Not Eligibile";
}
