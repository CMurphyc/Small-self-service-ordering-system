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
    cout<<"�ͻ����������������"<<endl;
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
            cout<<" ��"<<++count<<" ��: "<<client[i].getName()<<"\t �ܼ��ǣ�"<<client[i].getFee()<<" Ԫ"<<"\t �Ͳ�"<<endl<<endl;
            if(strcmp(client[i].getName(),s)==0)
                th =count;
        }
    for(int i = 0; i < clientNum ; i ++)
        if(client[i].getType()==2)
        {
            cout<<" ��"<<++count<<" ��: "<<client[i].getName()<<"\t �ܼ��ǣ�"<<client[i].getFee()<<" Ԫ"<<"\t ����"<<endl<<endl;
            if(strcmp(client[i].getName(),s)==0)th =count;
        }
    cout<<" ����ǰ���ڵ�"<<th<<" ��"<<endl;
    cout<<"----------------------------------"<<endl;
}
void ClientManager::showAll()
{
    for(int i = 0 ; i < clientNum ; i ++ )
    {
        if(client[i].getType()==1)
        {
            cout<<" �����ţ� "<<i+1<<endl;
            client[i].showClientMessage();
            cout<<endl;
        }
    }
    for(int i = 0 ; i < clientNum ; i ++ )
    {
        if(client[i].getType()==2)
        {
            cout<<" �����ţ� "<<i+1<<endl;
            client[i].showClientMessage();
            cout<<endl;
        }
    }
}
