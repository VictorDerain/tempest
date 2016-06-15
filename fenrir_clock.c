/*
 * fenrir_clock.c
 *
 * Created: 04.06.2016 4:20:00
 *  Authors: Derain & BADsup
 */ 

/*
second=60
minute=60
hour=24
day =28,29,30,31
month=12
year=inf;
*/




#include <avr/io.h>


void set_time();
char mouth_days();

unsigned char time_hour;
unsigned char time_minute;
unsigned char time_second;
unsigned char time_day;
unsigned char time_month;
unsigned int  time_year=2016;


int main(void)
{
//initialization
set_time();

	

	//basic
	if(time_second==60)
		{
			time_second=0;
			time_minute+=1;
		}
	if(time_minute==60)
		{
			time_minute=0;
			time_hour+=1;
		}
	if(time_hour==24)
		{
			time_hour=0;
			time_day+=1;
		}
	if(time_day==month_days())
		{
			time_day=1;
			time_month+=1;
		}				
	if(time_month==13)
		{
			time_year+=1;
			time_month=1;
		}
}

set_time()
{
	
}

month_days()
{
    if((time_month==1)||(time_month==3)||(time_month==5)||(time_month==7)||(time_month==8)||(time_month==10)||(time_month==12))
	return 31;
	else if((time_month==2)&&(0==time_year%4)) return 29;
	else if(time_month==2) return 28;
	else return 30;
	
	//optimizirovat'
}


/*
6 indikatorov s tochkoy
1._2.___3._4.___5._6.

za raz goryat:
1-4, 2-5, 3-6     //dlya minimizacii effekta begushego ognya


4 pina dlya dlya kajdogo chisla

0-9 = 0h-9h - 0000b-1001b
vozmohno hranenie v odnom baite   //ne obyazatel'no
10010001b=9 1


programmiruem kamen' cherez usb-uart driver

*/