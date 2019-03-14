#ifndef CLIENTMANAGER
#define CLIENTMANAGER
#include"Client.h"
#include<iostream>
using namespace std;
#define MAX_CLIENT_NUM 60 //最大客户数量
class ClientManager
{
public:
    ClientManager(); //构造函数
    int clientNum ; //记录客户数量
    Client client[MAX_CLIENT_NUM]; //记录存储客户
    void addClient(Client c); //添加新客户
    int getClientNum(); //返回客户数量
    void showQuery(char * s); //查询客户
    void showAll(); //显示所有客户
};
#endif

