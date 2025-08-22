#include <iostream>
using namespace std;

class Car{
    public:
    string car_name,car_brand,car_model,own_name;
    int car_used_year,car_manf_year,contact;
    void info(){
        cout<<"\nEnter Owners Name: ";
        cin>>own_name;
        cout<<"Contact Number: ";
        cin>>contact;
        cout<<"\nEnter Car Brand: ";
        cin>>car_brand;
        cout<<"Enter Car Name: ";
        cin>>car_name;
        cout<<"Enter the Year Car Was Manufactured: ";
        cin>>car_manf_year;
        cout<<"Enter no. Of Years Car was in Use: ";
        cin>>car_used_year;
    }
};
int main(){
    Car c1;
    c1.info();
    cout<<"-------OWNER DETAILS-------";
    cout<<"\nOwners Name: "<<c1.own_name;
    cout<<"\nContact Number: "<<c1.contact;
    cout<<"-------CAR DETAILS-------";
    cout<<"\nCar Brand: "<<c1.car_brand;
    cout<<"\nCar Name: "<<c1.car_name;
    cout<<"\nYear of Manufacturing: "<<c1.car_manf_year;
    cout<<"\nCar Used for Years: "<<c1.car_used_year;
    return 0;

}
