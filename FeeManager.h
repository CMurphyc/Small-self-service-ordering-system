#ifndef FEEMANAGER
#define FEEMANAGER
class FeeManager
{
private:
    double jiuCanFee; //就餐总收入
    double waiMaiFee; //外卖总收入
public:
    FeeManager(); //构造函数
    double getWaiMaiFee(); //返回外卖总收入
    double getJiuCanFee(); //返回就餐总收入
    void addWaiMaiFee(double x); //增加外卖总收入
    void addJiuCanFee(double x); //添加就餐总收入
};
#endif
