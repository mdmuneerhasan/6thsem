#include<p89v51rx2.h>
void delay()
{
		unsigned int i,j;
		for(i=0;i< 1000;i++)
		for(j=0;j< 100;j++);
}

void main(){
					
	while(1){
					RxD=1;
					TxD=1;
					WR=1;
					RD=1;
		if(INT0==1){
					RxD=0;
		
					delay();
					RxD=1;
		}

		else if(INT1==1){
					RxD=0;
					TxD=0;
					delay();
					RxD=0;
					TxD=1;
					delay();
					RxD=1;
					TxD=0;
					delay();
					RxD=1;
					TxD=1;
					delay();
		}

		else if(T0==1){
					RxD=0;
					TxD=0;
					WR=0;
					delay();
					RxD=0;
					TxD=0;
			    WR=1;
					delay();
					RxD=0;
					TxD=1;
			    WR=0;
					delay();
					RxD=0;
					TxD=1;
			    WR=1;
					delay();
					RxD=1;
					TxD=0;
			    WR=0;
					delay();
					RxD=1;
					TxD=0;
			    WR=1;
					delay();
					RxD=1;
					TxD=1;
			    WR=0;
					delay();
					RxD=1;
					TxD=1;
			    WR=1;
					delay();
		}

		else if(T1==1){
					RxD=0;
					TxD=0;
					WR=0;
					RD=0;
					delay();
					RxD=0;
					TxD=0;
			    WR=0;
					RD=1;
					delay();
					RxD=0;
					TxD=0;
			    WR=1;
					RD=0;
					delay();
					RxD=0;
					TxD=0;
			    WR=1;
					RD=1;
					delay();
					RxD=0;
					TxD=1;
			    WR=0;
					RD=0;
					delay();
					RxD=0;
					TxD=1;
			    WR=0;
					RD=1;
					delay();
					RxD=0;
					TxD=1;
			    WR=1;
					RD=0;
					delay();
					RxD=0;
					TxD=1;
			    WR=1;
					RD=1;
					delay();
					RxD=1;
					TxD=0;
					WR=0;
					RD=0;
					delay();
					RxD=1;
					TxD=0;
			    WR=0;
					RD=1;
					delay();
					RxD=1;
					TxD=0;
			    WR=1;
					RD=0;
					delay();
					RxD=1;
					TxD=0;
			    WR=1;
					RD=1;
					delay();
					RxD=1;
					TxD=1;
			    WR=0;
					RD=0;
					delay();
					RxD=1;
					TxD=1;
			    WR=0;
					RD=1;
					delay();
					RxD=1;
					TxD=1;
			    WR=1;
					RD=0;
					delay();
					RxD=1;
					TxD=1;
			    WR=1;
					RD=1;
					delay();
		}
	}


}