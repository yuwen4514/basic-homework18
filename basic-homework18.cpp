#include<stdio.h> 
#include<string.h> 

int main(void)

{

    char str[20]; 

    int i,n[256]={0}; 
    printf("��J�@�s���ơA�H�p��C�ӼƦr�X�{�����ơG");  

    scanf("%s",str);  

    for(i=0;i<strlen(str);i++) 

        n[(int)str[i]]++; 

    for(i=0;i<256;i++) 

        if(n[i]!=0)

            printf("�r��%c�X�{%d��\n",(char)i,n[i]);

}

