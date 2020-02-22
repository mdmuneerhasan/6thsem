#include<iostream>
using namespace std;
int main(){
	string s1;
	bool flag=false,final=true;
	getline(cin,s1);
    int i=0;
	for(;i<s1.size();i++){
		
			if(s1[i]=='0' && s1[i+1]=='0'){
               i++;
				
			}
			else if(s1[i]=='1'){
				flag=true;
				break;
			}
			else{
				flag=false;
				final=false;
			}

	}
	//cout<<flag<<final<<endl;
	for(;i<s1.size();i++){
		if(s1[i]=='1'){
			flag=true;
		}
		else if(s1[i]=='2'){
			break;
		}
		else{
			final=false;
			break;
		}
	}
	//cout<<flag<<final<<endl;
	for(;i<s1.size();i++){
		if(s1[i]=='2'){
		}
		else
		final=false;
		break;
	}
	//	cout<<flag<<final<<endl;
	(final==true && flag==true)?cout<<"Accepted" :cout<<"Rejected"<<endl;
	return 0;
}
