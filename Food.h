#ifndef FOOD
#define FOOD
class Food
{
private:
    char *name; //ʳ������
    double price; //ʳ��۸�
public:
    Food() {}; //���캯��
    Food(char *s,double p); //���캯��
    void setName(char *s); //����ʳ������
    char* getName(); //����ʳ������
    double getPrice(); //����ʳ��۸�
    void setPrice(double p); // ����ʳ��۸�
    void showMessage(); //��ʾʳ������ƺͼ۸�
};
#endif
