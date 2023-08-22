#include<bits/stdc++.h>
using namespace std;

int main() {

    string str = "afdsdfdJKJKJKsdfsdf";

     for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
     }
     cout<<str<<endl;
    string str1="WEREERhjhjhjhETRERTERT";
    for(int i=0;i<str1.size();i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i]+=32;
        }
        else{
            str1[i]-=32;
        }

     }
     cout<<str1<<endl;

    transform(str.begin(),str.end(), str.begin(), :: toupper);
      
    cout<<str<<endl;
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    cout<<str1<<endl;

    return 0;
}