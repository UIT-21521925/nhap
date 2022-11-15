//Kiem tra xem chuoi co doi xung hay khong
#include <iostream>
#include <string.h>
using namespace std;
void nhapchuoi(char s[100]){
cout<<"Nhap chuoi: ";
gets(s);
}
void xuatchuoi (char s[100]){
cout<<"Xuat chuoi: ";
cout<<s;
}
int chuoidoixung(char s[100]){
for (int i=0; i<(strlen(s)/2); i++){
    if(s[i] == s[strlen(s)-i-1]){
        return 1;
    }
    else {return -1;
    break;}
}}
int main (){
char s[100];
nhapchuoi(s);
xuatchuoi(s);
cout<<endl;
chuoidoixung(s);
if (chuoidoixung(s)==1){
    cout<<"Chuoi doi xung";
}
else {cout<<"Chuoi khong doi xung";}
return 0;
}
