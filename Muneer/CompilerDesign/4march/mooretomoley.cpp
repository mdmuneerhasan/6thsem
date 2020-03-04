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
int n,n1,startPoint,endPoint,cnt=0,q=0,qry=0;
struct node
{
    string s0,s1,s2;
    int a0;
    int a1;
    int out;    

};
vector<node> vec(4);
bool cmp(node n1,node n2){
    return n1.s1>=n2.s1;
}
bool cmp1(node n1,node n2){
    return n1.s2>=n2.s2;
}
int search(string s){

    for(int i=0;i<n;i++){
        if(s==vec[i].s0){
            return vec[i].out;
        }
    }
    return -1;

}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    //cin >>t;    while (t--)
    {
        cin >> n;
        vec.resize(n);
        for(int i=0;i<n;i++){
            cin>>vec[i].s0;
            cin>>vec[i].s1;
            cin>>vec[i].s2;
            cin>>vec[i].out;
        }
        cout << endl;
            cout<<"s0"<<"\t";
            cout<<"a0"<<"\t";
            cout<<"o/p"<<"\t";
            cout<<"a1"<<"\t";
            cout<<"o/p"<<"\t";
            cout <<endl;

        for(int i=0;i<n;i++){
            cout<<vec[i].s0<<"\t";
            cout<<vec[i].s1<<"\t";
            cout<<search(vec[i].s1)<<"\t";
            cout<<vec[i].s2<<"\t";
            cout<<search(vec[i].s2)<<"\t";
            cout <<endl;
        }
        cout <<endl;

      
    }
    return 0;
}