#include<iostream>
#include<utility>
#include<map>

using namespace std;

bool check(string input){
	
	for(int i=0;input[i]!='\0';i++){
		if(input[i]!='0'&&input[i]!='1'){
			return false;
		}
	}

return true;

}


int main(){

	string input;
	string cs="q1";
	string output="";
	string outputState="";

	cout<<"Input String : ";
	cin>>input;

	if(check(input)){
		cout<<"Valid"<<endl;
	}else{
		cout<<"Not Valid"<<endl;
	}

	int i=0;


	cout<<"CS"<<"\t"<<"Input"<<"\t"<<"NextState"<<"\t"<<"Final Output"<<endl;

	// cout<<"q1"<<"-->";
	outputState+="q1-->";
	while(input[i]!='\0'){

		if(cs=="q1"&&input[i]=='0'){

			cout<<"q1"<<"\t"<<input[i]<<"\t"<<"q3"<<"\t\t"<<"0"<<endl;

			outputState+="q3-->";
		
			cs="q3";
			output+="0";
		}

		else if(cs=="q2"&&input[i]=='0'){
			outputState+="q1-->";

			cout<<"q2"<<"\t"<<input[i]<<"\t"<<"q1"<<"\t\t"<<"1"<<endl;
		
			cs="q1";
			output+="1";

		}
		else if(cs=="q3"&&input[i]=='0'){

			outputState+="q2-->";

			cout<<"q3"<<"\t"<<input[i]<<"\t"<<"q2"<<"\t\t"<<"1"<<endl;
			
			cs="q2";
			output+="1";

		}

		else if(cs=="q4"&&input[i]=='0'){

			outputState+="q4-->";

			cout<<"q4"<<"\t"<<input[i]<<"\t"<<"q4"<<"\t\t"<<"1"<<endl;
			
			cs="q4";
			output+="1";

		}

		else if(cs=="q1"&&input[i]=='1'){

			outputState+="q2-->";

			cout<<"q1"<<"\t"<<input[i]<<"\t"<<"q2"<<"\t\t"<<"0"<<endl;
			
			cs="q2";
			output+="0";

		}
		else if(cs=="q2"&&input[i]=='1'){

			outputState+="q4-->";

			cout<<"q2"<<"\t"<<input[i]<<"\t"<<"q4"<<"\t\t"<<"0"<<endl;
			
			cs="q4";
			output+="0";

		}
		else if(cs=="q3"&&input[i]=='1'){

			outputState+="q1-->";

			cout<<"q3"<<"\t"<<input[i]<<"\t"<<"q1"<<"\t\t"<<"1"<<endl;
			
			cs="q1";
			output+="1";

		}
		else if(cs=="q4"&&input[i]=='1'){

			outputState+="q3-->";

			cout<<"q4"<<"\t"<<input[i]<<"\t"<<"q3"<<"\t\t"<<"0"<<endl;
			
			cs="q3";
			output+="0";

		}

		i++;
	}

	cout<<endl;

	cout<<"Output String : "<<output<<endl;

	cout<<outputState<<endl;


}