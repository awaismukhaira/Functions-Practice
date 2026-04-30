#include <iostream>
using namespace std;

double totalBill(double price, double discount=10 ){
    int disc;
    disc=(price*discount)/100;
    return price-disc;
}
int main() {
    double totbill, price, spDiscount;
    char choice;
    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Do you want to give special discout (y/n)";
    cin>>choice;
    if(choice=='y'){
        cout<<"Enter Special discount: ";
        cin>>spDiscount;
        totbill=totalBill(price, spDiscount);
    }
    else
    totbill=totalBill(price);
    cout<<"Total Bill after discount: "<<totbill;
    return 0;
}
