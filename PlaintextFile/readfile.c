#include<stdio.h>
#include<string.h>

void main(){
    int len;
    char content[10000] = {0};
    FILE *fp = fopen("file.txt", "r");
    fscanf(fp, "%s", content);
    fclose(fp);
    // Notice we don't print the file content. It is simply held in memory.
    printf("Content length is %ld\n", strlen(content));
    fflush(stdout);
    getchar();
}
