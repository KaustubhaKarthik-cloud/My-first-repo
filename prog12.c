#include<stdio.h>


int main(){

FILE *pfile = fopen("Lyrics.txt", "r");

char buffer[1024] = {0};

if(pfile == NULL){
    printf("error reading the file");
    return 1;
}

while(fgets(buffer, sizeof(buffer), pfile)){
    printf("%s", buffer);
}


fclose(pfile);

return 0;
}