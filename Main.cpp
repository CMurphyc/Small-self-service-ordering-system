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
    FeeManager feem;//����Ͳͺ������ķ���
    MenuView mv; //�������
    ClientManager cm; // ����ͻ�����Ķ���
    FoodManager fm;// ����ʳ�����Ķ���
    fstream ioFile; // �ļ��������
    int clientChoice;// 1 ����˿�2 ʳ�����3 ���շ���4 �˳�ϵͳ
    int clientService;//1 �¹˿͵��2 ��ѯ
    int mainChoice;// 1 �Ͳ�2 ����
    int curClient; // ��ǰ�����Ĺ˿ͱ��
    int queryChoice;//1 ��ѯ����2 �˳���ѯ
    int foodChoice;//1 ���ʳ��2 �޸�ʳ��۸�3 ɾ��ĳ��ʳ��4 �˳�ʳ�����
    int viewChoice;//1 �˿ͷ���2 ʳ�����3 ���շ���4 �˳�ϵͳ
    int menuChoice;//1 ԭ�˵�2 ���º�˵�
    int mendDingDanChoice;//1 �޸�����2 ɾ��ʳ��3 �˳��޸�
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
//�����Ǵ��ļ�����ʳ�������ͼ۸���Ϣ
    cout<<"�������������"<<endl;
    string filename;
    cin>>filename;
    fstream fn;
    fn.open(filename.c_str(),ofstream::out);
    fn.close();
//���������ɶ�Ӧ���ڵĶ����ļ�
    while(true)
    {
//        cout<<111111112222<<endl;
        viewChoice = mv.showViewChoice();
        if(viewChoice == 1) // �˿ͷ���
        {
//            cout<<111<<endl;
            clientService = mv.showRegister();
            if(clientService == 1)// �û�ע��
            {
                char *name,*phone;
                name = new char[30];
                phone = new char[20];
                cout<<"�����ƿͻ�����"<<endl;
//                cout<<11111<<endl;
                cout<<"���Ķ�������"<<cm.getClientNum()+1<<endl;
                curClient = cm.getClientNum();
                cout<<"����������: ";
                cin>>name;
                cout<<"�������ֻ�����: ";
                cin>>phone;
                Client cc(name,phone);
                cc.setNumber(cm.getClientNum());
                cm.addClient(cc);
                mainChoice = mv.showMain();
                if(mainChoice == 1) //�Ͳ�
                {
                    cm.client[curClient].setType(1);
                    mv.showJiuCan();
                    while(true)
                    {
                        fm.showFood();
                        int choices;
                        choices = mv.showClientChoice();
                        if(choices==1)// ѡ��ʳ��������������µ�
                        {
                            char *n;
                            int code;
                            n = new char[20];
                            int nums;
                            double prices ;
                            cout<<"������ʳ����: ";
                            cin>>code;
                            n = fm.food[code].getName();
                            cout<<"��ѡ����ʳ� "<<n<<endl;
                            prices = fm.getPriceByName(n);
                            cout<<"����������: ";
                            cin>>nums;
                            cm.client[curClient].client_fm.addFood(Food(n,prices));
                            cm.client[curClient].addFee(nums*prices);
                            cm.client[curClient].num[cm.client[curClient].client_fm.getTotal()-1]=nums;
                            cout<<"��ǰ���ܷ�����"<<cm.client[curClient].getFee()<<endl<<endl;
                        }
                        else if(choices == 2)// �޸Ķ���
                        {
                            cout<<"����ǰ�Ķ����ǣ� "<<endl;
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
                        else if(choices == 3)// �ύ����
                            break;
                    }
                    feem.addJiuCanFee(cm.client[curClient].getFee());// ���ӾͲ��ܷ���
                    cout<<"���Ķ����ǣ� "<<endl;
                    cm.client[curClient].showClientMessage();// �����ǰ����
                }
                else if(mainChoice == 2) // ����
                {
                    cm.client[curClient].setType(2);
                    mv.showJiuCan();
                    while(true)
                    {
                        fm.showFood();
                        int choices;
                        choices = mv.showClientChoice();
                        if(choices==1)// ѡ��ʳ��������������µ�
                        {
                            char *n;
                            int code;
                            n = new char[20];
                            int nums;
                            double prices ;
                            cout<<"������ʳ����: ";
                            cin>>code;
                            n = fm.food[code].getName();
                            cout<<"��ѡ����ʳ� "<<n<<endl;
                            prices = fm.getPriceByName(n);
                            cout<<"����������: ";
                            cin>>nums;
                            cm.client[curClient].client_fm.addFood(Food(n,prices));
                            cm.client[curClient].addFee(nums*prices);
                            cm.client[curClient].num[cm.client[curClient].client_fm.getTotal()-1]=nums;
                            cout<<"��ǰ���ܷ�����"<<cm.client[curClient].getFee()<<endl<<endl;
                        }
                        else if(choices == 2)// �޸Ķ���
                        {
                            cout<<"����ǰ�Ķ����ǣ� "<<endl;
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
                        else if(choices == 3)// �ύ����
                            break;
                    }
                    feem.addWaiMaiFee(cm.client[curClient].getFee());// ���ӾͲ��ܷ���
                    cout<<"���Ķ����ǣ� "<<endl;
                    cm.client[curClient].showClientMessage();// �����ǰ����
                }
            }// �û�ע��
            else if(clientService == 2)
            {
                while(true)
                {
                    queryChoice = mv.showQuery();
                    if(queryChoice == 1) // ��ѯ�ͻ�������Ϣ
                    {
                        cout<<"���������������� "<<endl;
                        char *s;
                        s = new char[20];
                        cin>>s;
                        cm.showQuery(s);
                    }
                    else if(queryChoice == 2)break; // �˳���ѯ
                }
            }
        }
        else if(viewChoice == 2) // ʳ�����
        {
            while(true)
            {
                fm.showFood();
                foodChoice = mv.showMend();
                if(foodChoice == 1) //���ʳ��
                {
                    char *n;
                    double p;
                    n = new char[20];
                    cout<<"������ʳ�����ƣ� ";
                    cin>>n;
                    cout<<"������ʳ��۸� ";
                    cin>>p;
                    fm.addFood(Food(n,p));
                }
                else if(foodChoice == 2)// �޸�ʳ��۸�
                {
                    fm.changePrice();
                }
                else if(foodChoice == 3)// ɾ��ʳ��
                {
                    fm.deleteFood();
                }
                else if(foodChoice == 4)break; //�˳�ʳ�����
            }
        }
        else if(viewChoice == 3)// ���շ���
        {
            ofstream fout;
            fout.open(filename);
//            fn.open(filename.c_str(),ofstream::out);
            fout<<"���칲��"<<cm.getClientNum()<<" �����ѣ� �����ܶ"<<feem.getJiuCanFee()+feem.getWaiMaiFee()<<" Ԫ"<<endl;
            fout<<"���оͲ��ܶ�Ϊ"<<feem.getJiuCanFee()<<" Ԫ,";
            fout<<"�����ܶ�Ϊ"<<feem.getWaiMaiFee()<<" Ԫ"<<endl<<endl;
            fout<<"--------------------------------------"<<endl;
            cm.showAll();
            fout.close();
//            fn.close();
            cout<<"��������������"<<endl;
            cin>>filename;
            fstream fn;
            fn.open(filename.c_str(),ofstream::out);
            fn.close();
        }
        else if(viewChoice == 4)// �˳�ϵͳ
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
            cout<<"�ɹ��˳�ϵͳ"<<endl<<endl<<endl;
            return 0;
        }
    }
}
