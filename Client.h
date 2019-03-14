#ifndef CLIENT
#define CLIENT
#include"FoodManager.h"
#include<iostream>
using namespace std;
class Client
{
private:
    int number; //客户编号
    int type; //客户的类型， 1 表示就餐， 2 表示外卖
    double fee; //客户账单费用
    char *name; //客户名称
    char *phone; //客户手机号码
public:
    Client() {} //构造函数
    char * getName(); //返回客户姓名
    int num[100]; //num[i] 存储食物数量,i 表示食物编号
    FoodManager client_fm; //管理客户所点的食物
    Client(char *n,char *p);// 构造函数
    int getNumber(); //返回客户编号
    void setNumber(int n); //设置客户编号
    int getType(); //返回客户类型
    void setType(int n); //设置客户类型
    void addFee(double x); //添加费用
    double getFee(); //返回费用
    void showClientMessage();// 展示客户信息
    void changNum(); //修改客户所点的食物的数量
    void deleFood(); //删除客户所选择的食物
};
#endif
