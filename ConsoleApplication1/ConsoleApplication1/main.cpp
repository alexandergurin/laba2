#include <iostream> /*������� ����� Airline: ����� ����������, ����� �����,
 ��� ��������, ����� ������, ��� ������. 
������������ ��������� ������ � ���������� ����� (�������� ������������).
������� ������ ��������. �������:
a)  ������ ������ ��� ��������� ������ ����������;
 b)  ������ ������ ��� ��������� ��� ������; */
#include <cstdlib> 
#include <string>
#include <cstring>
#include "air.h"
#include <stdio.h>
#include <locale>
#include <cstring>
using namespace std;
int a;
char m;
char ss[50];
aeroflot::aeroflot(void) //����������� �����
{ 
	cout<<" ~~~~~~~~~~ ����������� ����� ~~~~~~~~~~~"<<endl;
} 
void aeroflot::setflight()
{
	
	cout<<"������� ����� ����������: "<<endl;
	cin>>destination;
	cout<<"����� �����: "<<endl;
	cin>>number;
	cout<<"��� ��������:"<<endl;
	cin>>type;
	cout<<"������� ���� ������:"<<endl;
	cin>>day;
	cout<<"����� ������:"<<endl;
	cin>>time;
} ;
int aeroflot::get_number()
{
return number;}
void aeroflot::getflight()
{  
	cout<<"����� ����������: "<<this->destination<<endl;
	cout<<"����� �����: "<<this->number<<endl;
	cout<<"��� ��������:"<<this->type<<endl;
	cout<<"���� ������:"<<this->day<<endl;
	cout<<"����� ������:"<<this->time<<endl;
}  
void aeroflot::print()
{  
	cout<<"����� �����: "<<this->number<<endl;
	cout<<"���� ������:"<<this->day<<endl;
}  
/*char aeroflot::get_dest()
{
	return destination;
};*/
 aeroflot::~aeroflot(void)
{ 
	cout<<"####### ���������� ����� #######"<<endl;	
}
 aeroflot::aeroflot(int a,int b)
 {cout<<"����� �����������"<<endl;
 
	 day=a;
 number=b;
 };
int main ()
{
	setlocale(LC_ALL,"rus");
		aeroflot as(11,22);
		as.print();
aeroflot *x=new aeroflot[4]; 
for (int i=1;i<5;i++)
{
	cout<<"���� �:"<<i<<endl;
	x[i].setflight();
};
for (int j=1;j<5;j++)
{
cout<<"���� �:"<<j<<endl;
	x[j].getflight();
};
cout<<"����� ������ �����:"<<endl;
cin>>a;
for (int i=1;i<5;i++)
{
	if (x[i].get_number() ==a)
		x[i].getflight();

}

cout<<"����� �� ������ ��������"<<endl;
cin>>m;
for (int i=1;i<5;i++)
{
	if (x[i].get_dest()==m)
		x[i].getflight();

}
system("pause");
delete [] x;

}