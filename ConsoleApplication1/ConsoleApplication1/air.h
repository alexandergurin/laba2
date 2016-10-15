#pragma once 
class aeroflot
{  
 char destination[10]; 
 char day[8];
 int time;
 int number;
 char type[8];
public:  
 aeroflot(void);  
 void setflight();
 void getflight();  
 ~aeroflot(void); 
};  