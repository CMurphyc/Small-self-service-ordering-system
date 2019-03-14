#include"Food.h"
#include<iostream>
using namespace std;
Food::Food(char *s,double p)
{
    name = s;
    price = p;
}
void Food::setName(char *s)
{
    name = s;
}
void Food::setPrice(double p)
{
    price = p;
}
void Food::showMessage()
{
    cout<<name<<"\t"<<price<<" ? "<<endl;
}
double Food::getPrice()
{
    return price;
}
char* Food::getName()
{
    return name;
}
