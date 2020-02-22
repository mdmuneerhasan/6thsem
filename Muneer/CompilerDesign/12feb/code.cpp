#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
vector<int> vec;
int n,n1,startPoint,endPoint,cnt=0,q=0,qry=0;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    //cin >>t;    while (t--)
    {
        cout <<"Name : Muneer Hasan"<<endl;
        cout <<"Roll No. : 17BCS054"<<endl;
        string s;
        cin >> s;
        if(s.size()<3 || s.size()>16){
            cout << "rejected"<<endl;
            return 1;
        }
        bool flag=true;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')||(s[i]=='*' ||s[i]<='-'));
            else flag=false;

        }
        if(flag){
            cout << "accepted"<<endl;
        }else{
            cout << "rejected"<<endl;
        }
        
      
    }
    return 0;
}
