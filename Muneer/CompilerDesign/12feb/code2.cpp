#include<bits/stdc++.h>
using namespace std;
string s;
bool flag=true;
bool matcher2(int index){
    if(index==s.size()){
        return true;
    }
    if(s[index]=='2')return matcher2(index+1);
    return false;
}
bool matcher1(int index){
    if(index==s.size()){
        return true;
    }
    if(s[index]=='1')return matcher1(index+1);
    if(s[index]=='2')return matcher2(index+1);
    return false;
}
bool matcher(int index){
    if(index==s.size()){
        return false;
    }
    if(s[index]=='0' && s[index+1]=='0')return matcher(index+2);
    else if(s[index]=='1')return matcher1(index+1);
    else return false;
    
     
}
int32_t main(){

    {   cout <<"Name : Muneer Hasan"<<endl;
        cout <<"Roll No. : 17BCS054"<<endl;
        cin >> s;
        
        if(matcher(0)){
            cout << "matched"<<endl;
        }else{
            cout << "rejected"<<endl;
        }
        
      
    }
    return 0;
}
