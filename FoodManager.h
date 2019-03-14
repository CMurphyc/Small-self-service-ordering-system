#ifndef FOODMANAGER
#define FOODMANAGER
#include"Food.h"
#define MAX_FOOD_NUM 99 //������ɵ�ʳ��������
class FoodManager
{
    int total ; //ʳ��������
public:
    FoodManager(); //���캯��
    int getTotal() ; //����ʳ��������
    Food food[MAX_FOOD_NUM]; //��¼ʳ��
    void addFood(Food f); //���ʳ��
    void addFood(char *s,double p); //���ʳ��
    void deleteFood(); //ɾ��ʳ��
    void changePrice(); //�޸�ʳ��۸�
    void showFood(); //��ʾʳ����Ϣ
    char * getNameByList(int list); //ͨ��ʳ���ŷ���ʳ������
    double getPriceByName(char *s); //ͨ��ʳ�����Ʒ���ʳ��۸�
    int getListByName(char *s); //ͨ��ʳ�����Ʒ���ʳ����
    void setTotal(int x); //�޸�ʳ��������
};
#endif
