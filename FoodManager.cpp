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
    cout<<" 成功添加了食物，当前共有"<<total<<endl;
}
void FoodManager::showFood()
{
    cout<<" 食物中共有"<<total<<" 种"<<endl;
    cout<<" 食物编号"<<" 名称\t\t"<<" 单价"<<endl;
    for(int i = 0 ; i < total ; i ++ )
        cout<<setw(10)<<setiosflags(ios::left)<<i<<setw(10)<<setiosflags(ios::left)<<food[i].getName()<<"\t"<<food[i].getPrice()<<endl;
}
void FoodManager::changePrice()
{
    char *s;
    int code;
    s = new char[20];
    double p;
    cout<<" 请输入食物编号: ";
    cin>>code;
    s = food[code].getName();
    cout<<" 您选择了食物： "<<s<<endl;
    cout<<" 请输入价格: ";
    cin>>p;
    for(int i = 0; i < total ; i ++)
        if(!strcmp(food[i].getName(),s))
        {
            food[i].setPrice(p);
            cout<<" 修改成功"<<endl;
            return;
        }
    cout<<" 没有这种食物，修改失败"<<endl;
}
void FoodManager::deleteFood()
{
    char *s;
    s = new char[20];
    cout<<" 请输入菜名: ";
    cin>>s;
    for(int i = 0 ; i < total ; i ++)
        if(strcmp(food[i].getName(),s)==0)
        {
            cout<<" 成功删除"<<s<<endl;
            total --;
            for(int t = i; t < total ; t ++)
                food[t]=food[t+1];
            return;
        }
    cout<<" 没有这种食物"<<endl;
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
