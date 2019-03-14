#include"FoodManager.h"
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#include<iomanip>
FoodManager::FoodManager()
{
    total = 0;
}
void FoodManager::addFood(Food f)
{
    food[total++]=f;
    cout<<" �ɹ������ʳ���ǰ����"<<total<<endl;
}
void FoodManager::showFood()
{
    cout<<" ʳ���й���"<<total<<" ��"<<endl;
    cout<<" ʳ����"<<" ����\t\t"<<" ����"<<endl;
    for(int i = 0 ; i < total ; i ++ )
        cout<<setw(10)<<setiosflags(ios::left)<<i<<setw(10)<<setiosflags(ios::left)<<food[i].getName()<<"\t"<<food[i].getPrice()<<endl;
}
void FoodManager::changePrice()
{
    char *s;
    int code;
    s = new char[20];
    double p;
    cout<<" ������ʳ����: ";
    cin>>code;
    s = food[code].getName();
    cout<<" ��ѡ����ʳ� "<<s<<endl;
    cout<<" ������۸�: ";
    cin>>p;
    for(int i = 0; i < total ; i ++)
        if(!strcmp(food[i].getName(),s))
        {
            food[i].setPrice(p);
            cout<<" �޸ĳɹ�"<<endl;
            return;
        }
    cout<<" û������ʳ��޸�ʧ��"<<endl;
}
void FoodManager::deleteFood()
{
    char *s;
    s = new char[20];
    cout<<" ���������: ";
    cin>>s;
    for(int i = 0 ; i < total ; i ++)
        if(strcmp(food[i].getName(),s)==0)
        {
            cout<<" �ɹ�ɾ��"<<s<<endl;
            total --;
            for(int t = i; t < total ; t ++)
                food[t]=food[t+1];
            return;
        }
    cout<<" û������ʳ��"<<endl;
}
void FoodManager::addFood(char *s, double p)
{
    food[total++]=Food(s,p);
}
double FoodManager::getPriceByName(char *s)
{
    for(int i = 0 ; i < total ; i ++)
        if(strcmp(food[i].getName(),s)==0)
            return food[i].getPrice();
    return false;
}
int FoodManager::getListByName(char *s)
{
    for(int i = 0 ; i < total ; i ++)
        if(strcmp(food[i].getName(),s)==0)
            return i;
    return false;
}
int FoodManager::getTotal()
{
    return total;
}
char * FoodManager::getNameByList(int list)
{
    return food[list].getName();
}
void FoodManager::setTotal(int x)
{
    total = x;
}
