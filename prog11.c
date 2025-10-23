#include<stdio.h>


int main(){

FILE *pfile = fopen("C:\\Users\\karth\\OneDrive\\Desktop\\test.txt", "w");

char text[] = "C purogu o tsukatta fairu e youkoso!!";

if(pfile == NULL){
    printf("error opening the file");
    return 1;
}
fprintf(pfile, "%s", text);
printf("file was written succesfully");
fclose(pfile);

return 0;
}
