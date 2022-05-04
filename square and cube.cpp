#include <iostream>
using namespace std;
int main(){

int value;
int type;
cout<<"enter the no."<<endl;
cin>>value;

cout<<"press 2 for square an 3 for cube"<<endl;
cin>>type;
if (type==2)
{
    cout<<"the square is"<<endl<<value*value;
}
if (type==3)
{
    cout<<"the cube is"<<endl<<value*value*value;
}
else
cout<<"invalid demand"<<endl;





return 0;
}