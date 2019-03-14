#ifndef FOOD
#define FOOD
class Food
{
private:
    char *name; //食物名称
    double price; //食物价格
public:
    Food() {}; //构造函数
    Food(char *s,double p); //构造函数
    void setName(char *s); //更改食物名称
    char* getName(); //返回食物名称
    double getPrice(); //返回食物价格
    void setPrice(double p); // 设置食物价格
    void showMessage(); //显示食物的名称和价格
};
#endif
