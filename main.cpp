#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "HCfuncs.h"

const int alph_a = 97;
const int alph_z = 122;

using namespace std;
int main(){
string keys[26]={"1z2x3c4","5","n","m7,8","/9?0|\_=","(*","&^","%$#@!~","`.qawse","d","r","ftgy","huj","ikolp;[","']:{QAWS","ED","R","FTGYH","UJIKO","LPZXCV","BN","M","v-",")","b6","+"};
//Encryption
string mess = GetStr();
int lenght = GetLen(mess);
char encr_dat[lenght];
for(int i = 0;i<lenght;i++){
    char ch = mess[i];
    if(ch>=alph_a&&ch<=alph_z){
        if(isupper(ch)){
            ch = tolower(ch);
        }
        int ind_x = (int) ch - alph_a;
        int keylen = 0;
        for(int j = 0;keys[ind_x][j]!='\0';j++){
            keylen++;
        }
        int r = GenRand(i);
        r = (r)%keylen;
        encr_dat[i]=keys[ind_x][r];
    }else{cout<<"Characters only"<<endl;}
}
cout<<"Your encrypted message is: ";
for(int i = 0;i<lenght;i++){
    cout<<encr_dat[i];
}

//Decryption
mess = GetStr();
lenght = GetLen(mess);
char decr_dat[lenght];
for(int i = 0;i<lenght;i++){
    char ch = mess[i];
    int our_i=0;
    for(int i = 0;i<26;i++){
        for(int j = 0;keys[i][j]!='\0';j++){
            if(keys[i][j]==ch){
                our_i=i;
            }
        }

    }
    decr_dat[i]=our_i+alph_a;
}
cout<<"\r\nYour decrypted message :\r\n";
for(int i = 0;i<lenght;i++){
    cout<<decr_dat[i];
}
}
