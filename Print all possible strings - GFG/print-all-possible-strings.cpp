// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/
void comb(int i,vector<string> &ans,char str[],string res)
{
    if(i==strlen(str))
    {
        ans.push_back(res);
        return;
    }
    comb(i+1,ans,str,res+str[i]);
    comb(i+1,ans,str,res+" "+str[i]);
}
vector<string>  spaceString(char str[])
{
//Your code here
vector<string> ans;
string res="";
comb(1,ans,str,res+str[0]);
return ans;
}