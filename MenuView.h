#ifndef MENUVIEW
#define MENUVIEW
class MenuView
{
private:
    char whiteSmile; //��ɫЦ��
    char blackSmile; //��ɫЦ��
    char heart; //����ͼ��
public:
    MenuView(); //���캯��
    void showJiuCan(); //��ʾ�Ͳ��û���˽���
    void showWaiMai(); //��ʾ�����û���˽���
    int showMain(); //��ʾ�û�ѡ��Ͳͻ�����������
    int showViewChoice(); //��ʾ���뱾ϵͳ�Ĺ���ѡ�����
    int showRegister(); //��ʾ�ͻ�ע�����
    int showClientChoice(); //��ʾ�ͻ���ͽ���
    int showQuery(); //��ʾ��ѯ�ͻ���������
    int showMend(); //��ʾ�޸�ʳ�����
    int showMenuChoice(); //��ʾѡ��˵�����
    int showMendDingDan(); //��ʾ�ͻ��޸Ķ�������
};
#endif
