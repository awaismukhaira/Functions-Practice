#include<iostream>
using namespace std;
int bill(int mins,int pkgfee=200){
    int bill, extramins;
    bill=pkgfee;
    if(mins>100){
        extramins=mins-100;
        bill=bill+extramins*2;
    }
    return bill;
}
int main(){
    int mins,pkgfee,totbill;
    char choice;
    cout<<"Enter the Mins: ";
    cin>>mins;
    cout<<"Do you want to enter custom fee (y/n): ";
    cin>>choice;
    if(choice=='y'||choice=='Y'){
        cout<<"Enter the fee: ";
        cin>>pkgfee;
        totbill=bill(mins,pkgfee);
    }
    else
    totbill=bill(mins);
    cout<<"Total mins: "<<mins<<endl;
    cout<<"Total Bill: "<<totbill;
}
