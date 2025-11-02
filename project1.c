#include<stdio.h>
#include<string.h>

int main(){

char s[1000];
fgets(s, sizeof(s), stdin);
s[strlen(s) - 1] = '\0';

 int maxlen = 0;
 int len = strlen(s);

 for(int i = 0;i < len; i++){
    int currentlen = 0;
    for(int j = i;j < len;j++){
        int duplicate = 0;

        for(int k = i;k < j;k++){
            if(s[k] == s[j]){
                duplicate = 1;
                break;
            }
        }
        if(duplicate)
           break;
        currentlen++;
    }
    if(currentlen > maxlen)
    maxlen = currentlen;
 }    
    
    printf("%d",maxlen);

    return 0;
}
