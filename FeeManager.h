#ifndef FEEMANAGER
#define FEEMANAGER
class FeeManager
{
private:
    double jiuCanFee; //�Ͳ�������
    double waiMaiFee; //����������
public:
    FeeManager(); //���캯��
    double getWaiMaiFee(); //��������������
    double getJiuCanFee(); //���ؾͲ�������
    void addWaiMaiFee(double x); //��������������
    void addJiuCanFee(double x); //��ӾͲ�������
};
#endif
