#include<iostream>
using namespace std;
int calculateSubtotal(int m1, int m2, int m3){
    return m1+m2+m3;
}
double applytex(double subtot, double tex=5){
    double texamount,total;
    texamount=(subtot*tex)/100;
    total=subtot+texamount;
    return total;
}
int main(){
    int m1,m2,m3,subtot,aftertex,customtex;
    double total;
    char choice;
    cout<<"Enter the prices: "<<endl;
    cout<<"Item 1: ";
    cin>>m1;
    cout<<"Item 2: ";
    cin>>m2;
    cout<<"Item 3: ";
    cin>>m3;
    subtot=calculateSubtotal(m1,m2,m3);
    cout<<"Do you want to enter custom tex (y/n): ";
    cin>>choice;
    if(choice=='y'){
        cout<<"Enter the tex: ";
        cin>>customtex;
        total=applytex(subtot,customtex);
    }
    else
    total=applytex(subtot);
    cout<<"Total Bill: "<<subtot<<endl;
    cout<<"Bill after tex: "<<total;
}
