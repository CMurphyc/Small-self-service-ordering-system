//#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include"MenuView.h"
#include"FoodManager.h"
#include"ClientManager.h"
#include"FeeManager.h"
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
//    cout<<11111<<endl;
    FeeManager feem;//管理就餐和外卖的费用
    MenuView mv; //管理界面
    ClientManager cm; // 管理客户的类的对象
    FoodManager fm;// 管理食物的类的对象
    fstream ioFile; // 文件输入输出
    int clientChoice;// 1 服务顾客2 食物管理3 今日反馈4 退出系统
    int clientService;//1 新顾客点餐2 查询
    int mainChoice;// 1 就餐2 外卖
    int curClient; // 当前操作的顾客编号
    int queryChoice;//1 查询订单2 退出查询
    int foodChoice;//1 添加食物2 修改食物价格3 删除某种食物4 退出食物管理
    int viewChoice;//1 顾客服务2 食物管理3 今日反馈4 退出系统
    int menuChoice;//1 原菜单2 更新后菜单
    int mendDingDanChoice;//1 修改数量2 删除食物3 退出修改
    string day="1";
//    string ss="123";
    char ss[5]="123";
    ioFile.open("D:\\food.txt",ios::in);
    while(!ioFile.eof())
    {
        char *s;
        double p;
        s=new char[20];
        ioFile>>s>>p;
        fm.addFood(s,p);
    }
    ioFile.close();
//以上是从文件读入食物的种类和价格信息
    cout<<"请输入今天日期"<<endl;
    string filename;
    cin>>filename;
    fstream fn;
    fn.open(filename.c_str(),ofstream::out);
    fn.close();
//以上是生成对应日期的订单文件
    while(true)
    {
//        cout<<111111112222<<endl;
        viewChoice = mv.showViewChoice();
        if(viewChoice == 1) // 顾客服务
        {
//            cout<<111<<endl;
            clientService = mv.showRegister();
            if(clientService == 1)// 用户注册
            {
                char *name,*phone;
                name = new char[30];
                phone = new char[20];
                cout<<"请完善客户资料"<<endl;
//                cout<<11111<<endl;
                cout<<"您的订单号是"<<cm.getClientNum()+1<<endl;
                curClient = cm.getClientNum();
                cout<<"请输入姓名: ";
                cin>>name;
                cout<<"请输入手机号码: ";
                cin>>phone;
                Client cc(name,phone);
                cc.setNumber(cm.getClientNum());
                cm.addClient(cc);
                mainChoice = mv.showMain();
                if(mainChoice == 1) //就餐
                {
                    cm.client[curClient].setType(1);
                    mv.showJiuCan();
                    while(true)
                    {
                        fm.showFood();
                        int choices;
                        choices = mv.showClientChoice();
                        if(choices==1)// 选择食物种类和数量，下单
                        {
                            char *n;
                            int code;
                            n = new char[20];
                            int nums;
                            double prices ;
                            cout<<"请输入食物编号: ";
                            cin>>code;
                            n = fm.food[code].getName();
                            cout<<"您选择了食物： "<<n<<endl;
                            prices = fm.getPriceByName(n);
                            cout<<"请输入数量: ";
                            cin>>nums;
                            cm.client[curClient].client_fm.addFood(Food(n,prices));
                            cm.client[curClient].addFee(nums*prices);
                            cm.client[curClient].num[cm.client[curClient].client_fm.getTotal()-1]=nums;
                            cout<<"当前的总费用是"<<cm.client[curClient].getFee()<<endl<<endl;
                        }
                        else if(choices == 2)// 修改订单
                        {
                            cout<<"您当前的订单是： "<<endl;
                            while(true)
                            {
                                cm.client[curClient].showClientMessage();
                                mendDingDanChoice = mv.showMendDingDan();
                                if(mendDingDanChoice==1)
                                {
                                    cm.client[curClient].changNum();
                                }
                                else if(mendDingDanChoice == 2)
                                {
                                    cm.client[curClient].deleFood();
                                }
                                else if(mendDingDanChoice == 3)break;
                            }
                        }
                        else if(choices == 3)// 提交订单
                            break;
                    }
                    feem.addJiuCanFee(cm.client[curClient].getFee());// 增加就餐总费用
                    cout<<"您的订单是： "<<endl;
                    cm.client[curClient].showClientMessage();// 输出当前订单
                }
                else if(mainChoice == 2) // 外卖
                {
                    cm.client[curClient].setType(2);
                    mv.showJiuCan();
                    while(true)
                    {
                        fm.showFood();
                        int choices;
                        choices = mv.showClientChoice();
                        if(choices==1)// 选择食物种类和数量，下单
                        {
                            char *n;
                            int code;
                            n = new char[20];
                            int nums;
                            double prices ;
                            cout<<"请输入食物编号: ";
                            cin>>code;
                            n = fm.food[code].getName();
                            cout<<"您选择了食物： "<<n<<endl;
                            prices = fm.getPriceByName(n);
                            cout<<"请输入数量: ";
                            cin>>nums;
                            cm.client[curClient].client_fm.addFood(Food(n,prices));
                            cm.client[curClient].addFee(nums*prices);
                            cm.client[curClient].num[cm.client[curClient].client_fm.getTotal()-1]=nums;
                            cout<<"当前的总费用是"<<cm.client[curClient].getFee()<<endl<<endl;
                        }
                        else if(choices == 2)// 修改订单
                        {
                            cout<<"您当前的订单是： "<<endl;
                            while(true)
                            {
                                cm.client[curClient].showClientMessage();
                                mendDingDanChoice = mv.showMendDingDan();
                                if(mendDingDanChoice==1)
                                {
                                    cm.client[curClient].changNum();
                                }
                                else if(mendDingDanChoice == 2)
                                {
                                    cm.client[curClient].deleFood();
                                }
                                else if(mendDingDanChoice == 3)break;
                            }
                        }
                        else if(choices == 3)// 提交订单
                            break;
                    }
                    feem.addWaiMaiFee(cm.client[curClient].getFee());// 增加就餐总费用
                    cout<<"您的订单是： "<<endl;
                    cm.client[curClient].showClientMessage();// 输出当前订单
                }
            }// 用户注册
            else if(clientService == 2)
            {
                while(true)
                {
                    queryChoice = mv.showQuery();
                    if(queryChoice == 1) // 查询客户订单信息
                    {
                        cout<<"请输入您的姓名： "<<endl;
                        char *s;
                        s = new char[20];
                        cin>>s;
                        cm.showQuery(s);
                    }
                    else if(queryChoice == 2)break; // 退出查询
                }
            }
        }
        else if(viewChoice == 2) // 食物管理
        {
            while(true)
            {
                fm.showFood();
                foodChoice = mv.showMend();
                if(foodChoice == 1) //添加食物
                {
                    char *n;
                    double p;
                    n = new char[20];
                    cout<<"请输入食物名称： ";
                    cin>>n;
                    cout<<"请输入食物价格： ";
                    cin>>p;
                    fm.addFood(Food(n,p));
                }
                else if(foodChoice == 2)// 修改食物价格
                {
                    fm.changePrice();
                }
                else if(foodChoice == 3)// 删除食物
                {
                    fm.deleteFood();
                }
                else if(foodChoice == 4)break; //退出食物管理
            }
        }
        else if(viewChoice == 3)// 今日反馈
        {
            ofstream fout;
            fout.open(filename);
//            fn.open(filename.c_str(),ofstream::out);
            fout<<"今天共有"<<cm.getClientNum()<<" 人消费， 销售总额共"<<feem.getJiuCanFee()+feem.getWaiMaiFee()<<" 元"<<endl;
            fout<<"其中就餐总额为"<<feem.getJiuCanFee()<<" 元,";
            fout<<"外卖总额为"<<feem.getWaiMaiFee()<<" 元"<<endl<<endl;
            fout<<"--------------------------------------"<<endl;
            cm.showAll();
            fout.close();
//            fn.close();
            cout<<"请输入明天日期"<<endl;
            cin>>filename;
            fstream fn;
            fn.open(filename.c_str(),ofstream::out);
            fn.close();
        }
        else if(viewChoice == 4)// 退出系统
        {
//ioFile.open("D:\\food.txt",ios::out);
            ioFile.open("D:\\food.txt",ios::out);
            for(int i = 0 ; i < fm.getTotal() ; i ++)
            {
                ioFile<<setw(10)<<setiosflags(ios::left)<<fm.food[i].getName()<<"\t"<<fm.food[i].getPrice();
                if(i != (fm.getTotal()-1))
                    ioFile<<endl;
            }
            ioFile.close();
            cout<<"成功退出系统"<<endl<<endl<<endl;
            return 0;
        }
    }
}
