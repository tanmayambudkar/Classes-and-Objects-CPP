#include <iostream>
using namespace std;

class cuboid
{
private:
double height=10.0,width=20.0,length=45.0;
public:
double volume()
{
double v;
v=height*width*length;
return v;
}
};
int main()
{
cuboid c1;
double vol=c1.volume();
cout<<"Volume:"<<vol<<endl;
}
