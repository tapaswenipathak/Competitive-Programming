#include<stdio.h>
int main(){
    int day=1,mm=1,yyyy=1900,no_of_days,count_sundays=0,i;
    for(i=1900;i<2001;){
	if(day==0&&i>=1901){
	    ++count_sundays;
	}
	if(mm==4||mm==6||mm==9||mm==11){
	    no_of_days=30;
	}
	if(mm==2){
	    if(yyyy%400==0||(yyyy%4==0&&yyyy%100!=0)){
		no_of_days=29;
	    }
	    else{
		no_of_days=28;
	    }
	}
	if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
	    no_of_days=31;
	}
	day=(day+no_of_days)%7;
	++mm;
	if(mm>12){
	    mm=1;
	    ++i;
	}
    }
printf("%d",count_sundays);

    return 0;
}
