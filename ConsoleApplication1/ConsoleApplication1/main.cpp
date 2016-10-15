#include <iostream> /*Создать класс Airline: Пункт назначения, Номер рейса,
 Тип самолета, Время вылета, Дни недели. 
Функциичлены реализуют запись и считывание полей (проверка корректности).
Создать массив объектов. Вывести:
a)  список рейсов для заданного пункта назначения;
 b)  список рейсов для заданного дня недели; */
#include "air.h"
#include <stdio.h>
#include <locale>
using namespace std;

aeroflot::aeroflot(void) 
{ 
	cout<<" ~~~~~~~~~~ Конструктор Рейса ~~~~~~~~~~~"<<endl;
} 
void aeroflot::setflight()
{
	

} ;
void aeroflot::getflight()
{  
	
}  
 aeroflot::~aeroflot(void)
{ 
	

	cout<<"####### Деструктор Рейса #######"<<endl;
	
}
int main ()
{setlocale(LC_ALL,"rus");


aeroflot *x; 
for (int i=0;i<5;i++)
{
	x = new aeroflot[i];
};

};