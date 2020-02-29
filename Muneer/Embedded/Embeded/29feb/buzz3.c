
#include<p89v51rx2.h>

#define s0 INT0
#define s1 INT1
#define s2 T0
#define s3 T1
#define d0 RxD
#define d1 TxD
#define d2 WR
#define d3 RD

sbit buzzer = P0^3;
void delay(int x){
	int i,j;
	for(i=0;i<1000;i++){
		for(j=0;j<x;j++);
	}
}
void main(){
	int k=4,cnt,a=0,b=0,c=0,d=0,i;
	for(k=0;k<4;k++){
		if(k==3){d=1;c=1;b=1;a=1;}
		if(k==2){a=1;b=1;c=1;}
		if(k==1){b=1;c=1;}
		if(k==0){c=1;}
		
		
	
	 cnt=8*d+4*a+2*b+c;
	
	for(i=0;i<=cnt;i++){
		d0=1;
		d1=1;
		d2=1;
		d3=1;
		if(i&(1))d0=0;
		if(i&(1<<1))d1=0;
		if(i&(1<<2))d2=0;
		if(i&(1<<3))d3=0;
		delay(200);
		
	}
	buzzer=0;
	delay(200);
	buzzer=1;

		
	}
	



}