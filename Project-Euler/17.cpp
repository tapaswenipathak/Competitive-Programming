#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int num,i,len=0,digit;
    string name;
    string unit[10]={"one","two","three","four","five","six","seven","eight","nine"};
string two[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred[3] ={"hundred","hundredand","thousand"};
    for(i=1;i<=1000;++i){
	num=i;
	    if(num>=1&&num<10){
		name=name+unit[num-1];
		len+=name.length();
	    }
	    if(num>=10&&num<=19){
		name=name+two[num-10];
		len+=name.length();
	    }
	    if(num==20||num==30||num==40||num==50||num==60||num==70||num==80||num==90){
		name=tens[((num/10)-2)];
		len+=name.length();
	    }
	    if(num>20&&num<=99&&num!=30&&num!=40&&num!=50&&num!=60&&num!=70&&num!=80&&num!=90){
		digit=num%10;
		name=name+unit[digit-1];
		num/=10;
		name=tens[num-2]+name;
		len+=name.length();
	    }
	    if(num==100||num==200||num==300||num==400||num==500||num==600||num==700||num==800||num==900){
		digit=num/100;
		name=unit[digit-1]+hundred[0];
		len+=name.length();
	    }
	    if(num>=101&&num<=999&&num!=200&&num!=300&&num!=400&&num!=500&&num!=600&&num!=700&&num!=800&&num!=900){
		digit=num/100;
		name=name+unit[digit-1];
		name=name+hundred[1];
		num=num%100;
		if(num<10){
		    name=name+unit[num-1];
		}
		if(num>=10&&num<=19){
		    name=name+two[num-10];
		}	    
		if(num==20||num==30||num==40||num==50||num==60||num==70||num==80||num==90){
		    
		    name=name+tens[((num/10)-2)];
		}
		if(num>20&&num<=99&&num!=30&&num!=40&&num!=50&&num!=60&&num!=70&&num!=80&&num!=90){
		    digit=num%10;
		    num=num/10;
		    name=name+tens[num-2];
		    name=name+unit[digit-1];
		}
		len+=name.length();
	    }
	    if(num==1000){
		name="onethousand";
		len+=name.length();
	    }
	    name="\0";
    }
printf("%d",len);

    return 0;
}
