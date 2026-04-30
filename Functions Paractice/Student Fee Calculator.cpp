#include<iostream>
using namespace std;
//function declaration
double calculateFee(double tfee, double labfee, double libfee);
int main(){
    double tfee, labfee, libfee;
    cout<<"Enter the fees: "<<endl;
    cout<<"Tution Fee: ";
    cin>>tfee;
    cout<<"Lab Fee: ";
    cin>>labfee;
    cout<<"Library Fee: ";
    cin>>libfee;
    double totalfee=calculateFee(tfee, labfee, libfee);
    cout<<"Total Fee: "<<totalfee;
    return 0;
}
double calculateFee(double tfee, double labfee, double libfee){
    return tfee+labfee+libfee;
}
