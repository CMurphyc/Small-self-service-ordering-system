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
    cout<<"��ӭ����zstu dormitory"<<endl;

//�������������
    cout<<" ��ѡ������Ҫ�ķ���"<<endl;
    for(int i = 1 ; i <= 60 ; i++ )
        cout<<'-';
    cout<<endl;

    cout<<'|'<<"1: �Ͳ�";
    for(int i = 1 ; i <= 52 ; i ++ )
        cout<<' ';
    cout<<'|'<<endl;
    cout<<'|'<<"2: ����";
    for(int i = 1 ; i <= 52 ; i ++ )
        cout<<' ';
    cout<<'|'<<endl;
    for(int i = 1 ; i <= 60 ; i++ )
        cout<<'-';
    cout<<endl<<endl;
    cout<<"����ѡ����:";
    int choice;
    cin>>choice;
    return choice;
}
void MenuView::showJiuCan()
{
    cout<<" ��ӭ�Ͳͣ�������������ʳƷ����Ʒ��"<<1<<endl;
}
int MenuView::showViewChoice()
{
    cout<<"welcome to zstu dormitory"<<endl;
    cout<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| 1:�˿ͷ���|"<<endl;
    cout<<"| 2:ʳ�����|"<<endl;
    cout<<"| 3:���շ���|"<<endl;
    cout<<"| 4:�˳�ϵͳ|"<<endl;
    cout<<"------------------------"<<endl;
    cout<<" ����ѡ����: ";
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
    cout<<"| 1:�¹˿͵��|"<<endl;
    cout<<"| 2:��ѯ����|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showClientChoice()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:�Ӳ�|"<<endl;
    cout<<"| 2:�޸Ķ���|"<<endl;
    cout<<"| 3:�ύ����|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showQuery()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:��ѯ����|"<<endl;
    cout<<"| 2:�˳���ѯ|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showMend()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:���ʳ��|"<<endl;
    cout<<"| 2:�޸ļ۸�|"<<endl;
    cout<<"| 3:ɾ��ʳ��|"<<endl;
    cout<<"| 4:�˳�ʳ�����|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showMenuChoice()
{
    cout<<" ��Ӳ˵�:"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| 1:ԭ�˵�|"<<endl;
    cout<<"| 2:���º�Ĳ˵�|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
int MenuView::showMendDingDan()
{
    cout<<"------------------------"<<endl;
    cout<<"| 1:�޸�����|"<<endl;
    cout<<"| 2:ɾ��ʳ��|"<<endl;
    cout<<"| 3:�˳��޸�|"<<endl;
    cout<<"------------------------"<<endl;
    int next;
    cin>>next;
    return next;
}
