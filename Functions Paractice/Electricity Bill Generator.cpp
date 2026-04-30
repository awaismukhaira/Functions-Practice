#include<iostream>
using namespace std;
//prototype
int totbill(int units);
int main(){
    int unit;
    cout<<"Enter total units consumed: ";
    cin>>unit;
    int bill=totbill(unit);
    cout<<"Total Bill: "<<bill;
}
int totbill(int units){
    int price;
    if(units<=100){
        price=10;
    }
    else 
    price=15;
    return units*price;
}
