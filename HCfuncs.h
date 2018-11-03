#ifndef HCF
#define HCF

int GenRand(int i){
srand(time(NULL)+i);
int r = rand();
return r;
}

std::string GetStr(){
std::cout<<"\r\nPlease enter your message:\r\n";
std::string mess;
std::cin>>mess;
return mess;
}

int GetLen(std::string str){
    int len = 0;
    for(int i = 0;str[i]!='\0';i++){
        len++;
    }
return len;
}
#endif
