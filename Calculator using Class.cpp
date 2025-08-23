#include <iostream>
using namespace std;

class calc{
    public:
    float x,y,add,subs,div,multi;
    void multiplication();
    void division();
    void input(){
        cout<<"Enter The Value of X: ";
        cin>>x;
        cout<<"Enter The Value of Y: ";
        cin>>y;
    }
    void addition(){
        add=x+y;
    }
    void substraction(){
        subs=x-y;
    }
};

void division(calc &c){
    c.div=c.x/c.y;
}
void multiplication(calc &c){
    c.multi=c.x*c.y;
}
int main(){
    calc c1;
    c1.input();
    c1.addition();
    c1.substraction();
    division(c1);
    multiplication(c1);
    cout<<"Addition of X and Y are: "<<c1.add;
    cout<<"\nSubstraction of X and Y are: "<<c1.subs;
    cout<<"\nDivision of X and Y are: "<<c1.div;
    cout<<"\nMultiplication of X and Y are: "<<c1.multi;
    
    return 0;
}