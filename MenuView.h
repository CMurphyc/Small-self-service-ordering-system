#ifndef MENUVIEW
#define MENUVIEW
class MenuView
{
private:
    char whiteSmile; //白色笑脸
    char blackSmile; //黑色笑脸
    char heart; //心形图形
public:
    MenuView(); //构造函数
    void showJiuCan(); //显示就餐用户点菜界面
    void showWaiMai(); //显示外卖用户点菜界面
    int showMain(); //显示用户选择就餐还是外卖界面
    int showViewChoice(); //显示进入本系统的功能选择界面
    int showRegister(); //显示客户注册界面
    int showClientChoice(); //显示客户点餐界面
    int showQuery(); //显示查询客户订单界面
    int showMend(); //显示修改食物界面
    int showMenuChoice(); //显示选择菜单界面
    int showMendDingDan(); //显示客户修改订单界面
};
#endif
