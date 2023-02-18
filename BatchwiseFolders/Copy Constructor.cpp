// Copy Constructor.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;
class A
{
public:
A(){
	cout<<"A ctor"<<endl;
}
A(A &obj){
cout<<"A's copy ctor"<<endl;
}

A returnobjA()
{
A obj;
return obj;
}
};
int main()
{
A obj;
A obj_return;
obj_return= obj.returnobjA();
}

