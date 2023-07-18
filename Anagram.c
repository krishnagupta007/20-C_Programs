#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Lower_str(char* str1){
    int len = strlen(str1);
    
    for (int i = 0; i < len; i++) {
        str1[i] = tolower(str1[i]);
    }
}

void Sort_str(char* str1){
    int len = strlen(str1);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len - 1; j++) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
}

void main(){
    char str1[] = "HELLO";
    char str2[] = "Hello";

    
    Lower_str(str1);
    Lower_str(str2);

    Sort_str(str1);
    Sort_str(str2);
    
    if (strcmp(str1, str2) == 0){
        printf("Anagram");
    }else{
        printf("Not Anagram");
    }
}