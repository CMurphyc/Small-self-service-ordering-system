#ifndef CLIENTMANAGER
#define CLIENTMANAGER
#include"Client.h"
#include<iostream>
using namespace std;
#define MAX_CLIENT_NUM 60 //���ͻ�����
class ClientManager
{
public:
    ClientManager(); //���캯��
    int clientNum ; //��¼�ͻ�����
    Client client[MAX_CLIENT_NUM]; //��¼�洢�ͻ�
    void addClient(Client c); //����¿ͻ�
    int getClientNum(); //���ؿͻ�����
    void showQuery(char * s); //��ѯ�ͻ�
    void showAll(); //��ʾ���пͻ�
};
#endif

