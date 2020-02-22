#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	bool flag=false;
	int size=s.size();
	int i=0;
	if(size>=3 && size<=16){
	for(;i<size;i++){
		if(s[i]>='a' && s[i]<='z'){
			flag=true;
		}
		else if(s[i]>='0' && s[i]<='9'){
			flag=true;
		}
		else if(s[i]=='*' || s[i]=='-'){
			flag=true;
		}
		else{	
		flag=false;
		break;
	}
}
}
(flag==true)?cout<<"Accepted":cout<<"Rejected"<<endl;
	return 0;
}
