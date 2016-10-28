#include <iostream> /*Создать класс Airline: Пункт назначения, Номер рейса,
 Тип самолета, Время вылета, Дни недели. 
Функциичлены реализуют запись и считывание полей (проверка корректности).
Создать массив объектов. Вывести:
a)  список рейсов для заданного пункта назначения;
 b)  список рейсов для заданного дня недели; */
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
aeroflot::aeroflot(void) //конструктор рейса
{ 
	cout<<" ~~~~~~~~~~ Конструктор Рейса ~~~~~~~~~~~"<<endl;
} 
void aeroflot::setflight()
{
	
	cout<<"Введите пункт назначения: "<<endl;
	cin>>destination;
	cout<<"Номер рейса: "<<endl;
	cin>>number;
	cout<<"Тип самолета:"<<endl;
	cin>>type;
	cout<<"Введите день вылета:"<<endl;
	cin>>day;
	cout<<"Время вылета:"<<endl;
	cin>>time;
} ;
int aeroflot::get_number()
{
return number;}
void aeroflot::getflight()
{  
	cout<<"Пункт назначения: "<<this->destination<<endl;
	cout<<"Номер рейса: "<<this->number<<endl;
	cout<<"Тип самолета:"<<this->type<<endl;
	cout<<"День вылета:"<<this->day<<endl;
	cout<<"Время вылета:"<<this->time<<endl;
}  
void aeroflot::print()
{  
	cout<<"Номер рейса: "<<this->number<<endl;
	cout<<"День вылета:"<<this->day<<endl;
}  
/*char aeroflot::get_dest()
{
	return destination;
};*/
 aeroflot::~aeroflot(void)
{ 
	cout<<"####### Деструктор Рейса #######"<<endl;	
}
 aeroflot::aeroflot(int a,int b)
 {cout<<"Явный конструктор"<<endl;
 
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
	cout<<"Рейс №:"<<i<<endl;
	x[i].setflight();
};
for (int j=1;j<5;j++)
{
cout<<"Рейс №:"<<j<<endl;
	x[j].getflight();
};
cout<<"Поиск номеру рейса:"<<endl;
cin>>a;
for (int i=1;i<5;i++)
{
	if (x[i].get_number() ==a)
		x[i].getflight();

}

cout<<"Поиск по пункту прибытия"<<endl;
cin>>m;
for (int i=1;i<5;i++)
{
	if (x[i].get_dest()==m)
		x[i].getflight();

}
system("pause");
delete [] x;

}