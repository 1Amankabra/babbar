#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a'&&ch<='z')
      return ch;
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}


bool checkPalindrom(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
} 


void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s){
    int arr[26]={0};

    for(int i=0;i<26;i++){
        char ch =s[i];
        int num=0;
        if(ch>='a'&& ch<='z'){
             num=ch-'a';
        }
        else{
            num=ch-'A';
        }
        arr[num]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<s.length();i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    // char name[20];

    // cout<<"enter your name "<<endl;
    // cin>>name;
    // //name[2]='\0';

    // cout<<"Your name is";
    // cout<<name<<endl;
    
    // int len=getlength(name);
    // cout<<"length "<<len<<endl;
    
    // reverse(name,len);
    // cout<<"Your reverse name is";
    // cout<<name<<endl;
    
    // cout<<"Palindrom or not"<<checkPalindrom(name,len)<<endl;;
    
    // cout<<"character is"<<toLowerCase('b')<<endl;
    // cout<<"character is"<<toLowerCase('B')<<endl;
    string s;
    cin>>s;

    cout<<getMaxOccCharacter(s)<<endl;
    return 0;

}