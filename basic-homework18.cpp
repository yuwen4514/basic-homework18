#include<stdio.h> 
#include<string.h> 

int main(void)

{

    char str[20]; 

    int i,n[256]={0}; 
    printf("块硈﹃俱计璸衡–计瞷Ω计");  

    scanf("%s",str);  

    for(i=0;i<strlen(str);i++) 

        n[(int)str[i]]++; 

    for(i=0;i<256;i++) 

        if(n[i]!=0)

            printf("才%c瞷%dΩ\n",(char)i,n[i]);

}

