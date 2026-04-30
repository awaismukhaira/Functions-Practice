#include<iostream>
using namespace std;
double converttemp(double celsius){
    return (celsius * 9 / 5) + 32;
}
int main(){
    double Celsius,Fahrenheit;
    cout<<"Enter the temperature: ";
    cin>>Celsius;
    Fahrenheit=converttemp(Celsius);
    cout<<"Temperature in Fahrenheit: "<<Fahrenheit;
}
