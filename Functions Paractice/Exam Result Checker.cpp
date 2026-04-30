#include<iostream>
using namespace std;
int findAverage(int m1,int m2,int m3){
    double ave;
    ave=(m1+m2+m3)/3;
    return ave;
}
int checkResult(double average){
    char result;
    if(average>=50){
        result='p';
    }
    else
    result='f';
    return result;
}
int main(){
    int m1,m2,m3;
    double average;
    char result;
    cout<<"Enter you three books marks."<<endl;
    cout<<"Book 1: ";
    cin>>m1;
    cout<<"Book 2: ";
    cin>>m2;
    cout<<"Book 3: ";
    cin>>m3;
    average=findAverage(m1,m2,m3);
    result=checkResult(average);
    if(result=='p'){
        cout<<"Average: "<<average<<endl;
        cout<<"Result: Pass";
    }
    else{
        cout<<"Average: "<<average<<endl;
        cout<<"Result: Fail";
    }
}
