// this program demonstrate how strcmp() function works
#include<stdio.h>
#include<string.h>
int main(){
    char *str1 = "abcd";
    char *str2 = "abce";
    if(strcmp(str1,str2) < 0){   // d is less than e
        printf("str1 is less_then str2");
    }else{
        printf("str1 is greter_than or equal to str2");
    }
    
    
    printf("\n");
    
    
    char *str3 = "abce";
    char *str4 = "bbce";
    if(strcmp(str3,str4) < 0){   // a is less than b
        printf("str3 is less_then str4");
    }else{
        printf("str3 is greter_than or equal to str4");
    }

    printf("\n");

    char *str5 = "bace";
    char *str6 = "abce";
    if(strcmp(str5,str6) < 0){   // b is greter than a
        printf("str5 is less_then str6");
    }else{
        printf("str5 is greter_than or equal to str6");
    }

    printf("\n");

    char *str7 = "abce";
    char *str8 = "abce";
    if(strcmp(str7,str8) < 0){   // all characters are equal
        printf("str7 is less_then str8");
    }else{
        printf("str7 is greter_than or equal to str8");
    }

   printf("\n");

    char *str9 = "abc";
    char *str10 = "abcd";
    if(strcmp(str9,str10) < 0){   // length of the str9 is less than str10
        printf("str9 is less_then str10");
    }else{
        printf("str9 is greter_than or equal to str10");
    }
    
    return 0;
}

