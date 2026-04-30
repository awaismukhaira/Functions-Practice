#include<iostream>
using namespace std;
double findArea(double len,double wdt){
    return len*wdt;
}
double findPerimeter(double len,double wdt){
    return (len+wdt)*2;
}
int main(){
    double len, wdt, area, pmtr;
    cout<<"Enter length and width"<<endl;
    cout<<"Length: ";
    cin>>len;
    cout<<"Width: ";
    cin>>wdt;
    area=findArea(len, wdt);
    pmtr=findPerimeter(len,wdt);
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<pmtr<<endl;
}
