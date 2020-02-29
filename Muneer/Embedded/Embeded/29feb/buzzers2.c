
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
 
 
 void delay(unsigned int dela) 
 { 
 unsigned int i,j; 
for(i=0;i<=1000;i++) 
 for(j=0;j<dela;j++); 
 } 
  
void main(void){ 
int count = 0,i,first=0,second=0,third=0; 
int flag[] = {0,0,0,0}; 
 
while(1){  
if(!s3) break; 
if(!s0) flag[0]=1; 
if(!s1) flag[1]=1; 
if(!s2) flag[2]=1; 
} 
 
count = flag[0] + 2*(flag[1]) + 4*(flag[2]); 
for(i=0;i<=count;i++){ 
d0 = 1; 
d1 = 1; 
d2 = 1; 
first = i&(1<<0); 
second = i&(1<<1); 
third = i&(1<<2); 
if(first) d0 = 0; 
if(second) d1 = 0; 
if(third) d2 = 0; 
delay(200); 
}

buzzer=0;
delay(200);
buzzer=1;


}