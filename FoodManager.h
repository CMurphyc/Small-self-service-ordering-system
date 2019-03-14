#ifndef FOODMANAGER
#define FOODMANAGER
#include"Food.h"
#define MAX_FOOD_NUM 99 //最多容纳的食物种类数
class FoodManager
{
    int total ; //食物种类数
public:
    FoodManager(); //构造函数
    int getTotal() ; //返回食物种类数
    Food food[MAX_FOOD_NUM]; //记录食物
    void addFood(Food f); //添加食物
    void addFood(char *s,double p); //添加食物
    void deleteFood(); //删除食物
    void changePrice(); //修改食物价格
    void showFood(); //显示食物信息
    char * getNameByList(int list); //通过食物编号返回食物名称
    double getPriceByName(char *s); //通过食物名称返回食物价格
    int getListByName(char *s); //通过食物名称返回食物编号
    void setTotal(int x); //修改食物种类数
};
#endif
