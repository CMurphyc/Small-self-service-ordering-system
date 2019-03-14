#include"MenuView.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
MenuView::MenuView()
{
    whiteSmile = 1;
    blackSmile = 2;
    heart = 3;
}
int MenuView::showMain()
{
    cout<<"欢迎光临zstu dormitory"<<endl;

//输出餐厅的外形
    cout<<" 请选择您需要的服务"<<endl;
    for(int i = 1 ; i <= 60 ; i++ )
        cout<<'-';
    cout<<endl;

    cout<<'|'<<"1: 就餐";
    for(int i = 1 ; i <= 52 ; i ++ )
        cout<<' ';
    cout<<'|'<<endl;
    cout<<'|'<<"2: 外卖";
    for(int i = 1 ; i <= 52 ; i ++ )
        cout<<' ';
    cout<<'|'<<endl;
    for(int i = 1 ; i <= 60 ; i++ )
        cout<<'-';
    cout<<endl<<endl;
    cout<<"您的选择是:";
    int choice;
    cin>>choice;
    return choice;
}
void MenuView::showJiuCan()
{
    cout<<" 欢迎就餐，本餐厅有以下食品供您品尝"<<1<<endl;
}
int MenuView::showViewChoice()
{
    cout<<"welcome to zstu dormitory"<<endl;
    cout<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| 1:顾客服务|"<<endl;
    cout<<"| 2:食物管理|"<<endl;
    cout<<"| 3:今日反馈|"<<endl;
    cout<<"| 4:退出系统|"<<endl;
    cout<<"------------------------"<<endl;
    cout<<" 您的选择是: ";
    int next;
    string s;
    cin>>next;
//    cout<<s<<endl;
//    cout<<next<<endl;
//    scanf("%d",&next);
//    cout<<233333333333<<endl;
    cout<<endl;
    return next;
}
int MenuView::showRegister()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:新顾客点餐|"<<endl;
    cout<<"| 2:查询订单|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showClientChoice()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:加菜|"<<endl;
    cout<<"| 2:修改订单|"<<endl;
    cout<<"| 3:提交订单|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showQuery()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:查询订单|"<<endl;
    cout<<"| 2:退出查询|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showMend()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:添加食物|"<<endl;
    cout<<"| 2:修改价格|"<<endl;
    cout<<"| 3:删除食物|"<<endl;
    cout<<"| 4:退出食物管理|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showMenuChoice()
{
    cout<<" 添加菜单:"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| 1:原菜单|"<<endl;
    cout<<"| 2:更新后的菜单|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showMendDingDan()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:修改数量|"<<endl;
    cout<<"| 2:删除食物|"<<endl;
    cout<<"| 3:退出修改|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
