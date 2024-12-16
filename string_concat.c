#include<stdio.h>
#include<string.h>

int main(){
    char str[100],str1[100],res[100];
    printf("Enter string 1 : \n");
    fgets(str,100,stdin);
    printf("Enter the second stringg : \n");
    fgets(str1,100,stdin);
    int k = strlen(str);
    for(int j = 0;str1[j]!='\0';j++,k++){
        str[k] = str1[j];
    }
    puts(str);
}