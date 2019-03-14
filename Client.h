#ifndef CLIENT
#define CLIENT
#include"FoodManager.h"
#include<iostream>
using namespace std;
class Client
{
private:
    int number; //�ͻ����
    int type; //�ͻ������ͣ� 1 ��ʾ�Ͳͣ� 2 ��ʾ����
    double fee; //�ͻ��˵�����
    char *name; //�ͻ�����
    char *phone; //�ͻ��ֻ�����
public:
    Client() {} //���캯��
    char * getName(); //���ؿͻ�����
    int num[100]; //num[i] �洢ʳ������,i ��ʾʳ����
    FoodManager client_fm; //����ͻ������ʳ��
    Client(char *n,char *p);// ���캯��
    int getNumber(); //���ؿͻ����
    void setNumber(int n); //���ÿͻ����
    int getType(); //���ؿͻ�����
    void setType(int n); //���ÿͻ�����
    void addFee(double x); //��ӷ���
    double getFee(); //���ط���
    void showClientMessage();// չʾ�ͻ���Ϣ
    void changNum(); //�޸Ŀͻ������ʳ�������
    void deleFood(); //ɾ���ͻ���ѡ���ʳ��
};
#endif
