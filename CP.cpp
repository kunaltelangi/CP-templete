#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(string &s,int n){
    string ans="";           
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(s[i]==s[j]){   
                    break;   // We are breaking here because this caharacter is already 
                }           // added to our answer because it was found earlier
                
            }
            if(j==i){       // The loop ends without breaking, it means this 
                ans+=s[i];  // is the first occurence of this character in the string
            }               // so we add this character to our answer
        }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        removeDuplicates(s,n);
    }
    
}
