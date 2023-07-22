#include<stdio.h>
#include<string.h>

void main(){
    int len;
    char content[10000] = {0};
    FILE *fp = fopen("file-encrypted.txt", "r");
    fscanf(fp, "%s", content);
    fclose(fp);

    printf("Content length is %ld\n", strlen(content));
    fflush(stdout);
    getchar();
}
