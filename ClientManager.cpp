#include"ClientManager.h"
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

ClientManager::ClientManager()
{
    clientNum = 0;
}
void ClientManager::addClient(Client c)
{
    client[clientNum++] = c;
    cout<<"客户已添加至今日名单"<<endl;
}
int ClientManager::getClientNum()
{
    return clientNum;
}
void ClientManager::showQuery(char * s)
{
    int count = 0;
    int th;
    cout<<"----------------------------------"<<endl;
    for(int i = 0; i < clientNum ; i ++)
        if(client[i].getType()==1)
        {
            cout<<" 第"<<++count<<" 单: "<<client[i].getName()<<"\t 总价是："<<client[i].getFee()<<" 元"<<"\t 就餐"<<endl<<endl;
            if(strcmp(client[i].getName(),s)==0)
                th =count;
        }
    for(int i = 0; i < clientNum ; i ++)
        if(client[i].getType()==2)
        {
            cout<<" 第"<<++count<<" 单: "<<client[i].getName()<<"\t 总价是："<<client[i].getFee()<<" 元"<<"\t 外卖"<<endl<<endl;
            if(strcmp(client[i].getName(),s)==0)th =count;
        }
    cout<<" 您当前排在第"<<th<<" 单"<<endl;
    cout<<"----------------------------------"<<endl;
}
void ClientManager::showAll()
{
    for(int i = 0 ; i < clientNum ; i ++ )
    {
        if(client[i].getType()==1)
        {
            cout<<" 订单号： "<<i+1<<endl;
            client[i].showClientMessage();
            cout<<endl;
        }
    }
    for(int i = 0 ; i < clientNum ; i ++ )
    {
        if(client[i].getType()==2)
        {
            cout<<" 订单号： "<<i+1<<endl;
            client[i].showClientMessage();
            cout<<endl;
        }
    }
}
