#include<stdio.h> 
#include<string.h> 

int main(void)

{

    char str[20]; 

    int i,n[256]={0}; 
    printf("輸入一連串整數，以計算每個數字出現的次數：");  

    scanf("%s",str);  

    for(i=0;i<strlen(str);i++) 

        n[(int)str[i]]++; 

    for(i=0;i<256;i++) 

        if(n[i]!=0)

            printf("字符%c出現%d次\n",(char)i,n[i]);

}

