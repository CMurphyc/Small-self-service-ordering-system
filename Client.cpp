#include"Client.h"
#include<iomanip>
Client::Client(char *s,char *p)
{
    name = s;
    phone = p;
    fee = 0;
    for(int i = 0 ; i < 100 ; i++)
        num[i] = 0 ;
    cout<<"�ͻ�ע��ɹ�"<<endl;
}
int Client::getNumber()
{
    return number;
}
void Client::setNumber(int n)
{
    number = n;
}
int Client::getType()
{
    return type;
}
void Client::setType(int n)
{
    type = n;
}
void Client::addFee(double x)
{
    fee += x;
}
double Client::getFee()
{
    return fee;
}
void Client::showClientMessage()
{
    char * ss;
    if(type == 1)ss = " �Ͳ�";
    else if(type == 2)ss = " ����";
    cout<<"����: "<<name<<"\t\t"<<ss<<endl;
    cout<<"�ֻ�����: "<<phone<<endl;
    cout<<"�����ܼۣ� "<<fee<<endl;
    cout<<"�������飺 "<<endl;
    cout<<setw(10)<<setiosflags(ios::left)<<" ʳ������"<<setw(10)<<setiosflags(ios::left)<<"����"<<"\t ����\t �۸�"<<endl;
    for(int i = 0 ; i < client_fm.getTotal() ; i ++)
    {
        cout<<setw(10)<<setiosflags(ios::left)<<setw(10)<<i+1<<setiosflags(ios::left)<<client_fm.food[i].getName()<<"\t"<<num[i]<<"\t"<<num[i]*client_fm.food[i].getPrice()<<endl;
    }
    cout<<"�ܼ�:\t\t"<<fee<<endl;
}
char * Client::getName()
{
    return name;
}
void Client::changNum()
{
    int n;
    int numss;
    cout<<"������ʳ����ţ� ";
    cin>>n;
    cout<<"��ѡ����ʳ� "<<client_fm.getNameByList(n-1)<<endl;
    cout<<"������������ ";
    cin>>numss;
    fee += (numss - num[n-1] )*client_fm.getPriceByName(client_fm.getNameByList(n-1));
    num[n-1]=numss;
}
void Client::deleFood()
{
    int n;
    cout<<"������ʳ����ţ� ";
    cin>>n;
    cout<<"��ѡ����ʳ� "<<client_fm.getNameByList(n-1)<<endl;
    fee -= (num[n-1] )*client_fm.getPriceByName(client_fm.getNameByList(n-1));
    for(int i = n-1 ; i < client_fm.getTotal() ; i ++)
    {
        client_fm.food[i]=client_fm.food[i+1];
        num[i]=num[i+1];
    }
    client_fm.setTotal(client_fm.getTotal()-1);
}
