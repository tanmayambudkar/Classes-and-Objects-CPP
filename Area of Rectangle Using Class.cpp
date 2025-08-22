#include <iostream>
using namespace std;

class rec{
    public:
    int len;
    int width;
    int area;
};
void area(rec &r){
    int area,len,width;
    cout<<"Enter The Length of Rectangle: ";
    cin>>r.len;
    cout<<"Enter The Width of Rectangle: ";
    cin>>r.width;
    r.area=(r.len)*(r.width);
}
int main(){
    rec r1;
    area(r1);
    cout<<"--------RECTANGLE--------";
    cout<<"\nLength: "<<r1.len;
    cout<<"\nWidth: "<<r1.width;
    cout<<"\nArea: "<<r1.area;
    return 0;
}