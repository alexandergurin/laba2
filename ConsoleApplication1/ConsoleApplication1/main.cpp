#include <iostream> /*������� ����� Airline: ����� ����������, ����� �����,
 ��� ��������, ����� ������, ��� ������. 
������������ ��������� ������ � ���������� ����� (�������� ������������).
������� ������ ��������. �������:
a)  ������ ������ ��� ��������� ������ ����������;
 b)  ������ ������ ��� ��������� ��� ������; */
#include "air.h"
#include <stdio.h>
#include <locale>
using namespace std;

aeroflot::aeroflot(void) 
{ 
	cout<<" ~~~~~~~~~~ ����������� ����� ~~~~~~~~~~~"<<endl;
} 
void aeroflot::setflight()
{
	

} ;
void aeroflot::getflight()
{  
	
}  
 aeroflot::~aeroflot(void)
{ 
	

	cout<<"####### ���������� ����� #######"<<endl;
	
}
int main ()
{setlocale(LC_ALL,"rus");


aeroflot *x; 
for (int i=0;i<5;i++)
{
	x = new aeroflot[i];
};

};