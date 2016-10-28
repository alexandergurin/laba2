#pragma once 
class aeroflot
{
 char destination[10]; 
 int day;
 char time;
 int number;
 char type[8];
public:  
	aeroflot (  const aeroflot &A )
		{
	
			day=A.day;
	};
	int get_number();
	char get_dest();
 aeroflot(void);  
 aeroflot( int a, int b);
 void print();
 void setflight();
 void getflight();  

 ~aeroflot(void); 
};  