//
//  main.cpp
//  StudyC
//
//  Created by As one on 13. 7. 29..
//  Copyright (c) 2013년 As one. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/*
 7/31 strncmp - n 이 왜 쓰이는가 알아보기
 
 int	 memcmp(const void *, const void *, size_t);
        a, b 를 비교해서 a가 크면 1, 작으면 -1 같으면 0
 void	*memset(void *, int, size_t);
        a 를 int 만큼 size_t로 채운다
 char	*strchr(const char *, int);
        문자에서 int 에 입력한 문자부터 반환한다
 int	 strcmp(const char *, const char *);
        문자열의 바이트를 비교한다
 char	*strcpy(char *, const char *);
        a 에 b를 복사한다
 char	*strncat(char *, const char *, size_t);
        a에 b 를 size_t까지만 복사한다
 int	 strncmp(const char *, const char *, size_t);
        a랑 b를 size_t까지만 비교한다
 char	*strncpy(char *, const char *, size_t);
        a에 b를 size_t까지만 복사
 
 --- 해결 ---
 size_t	 strlen(const char *);
 
 char	*strcat(char *, const char *);
 문자열 합치기

 
*/

#pragma mark strcat
char	*myStrcat(char *a, const char *b);

char	*myStrcat(char *a, const char *b)
{
    
    const char *t;
    for (;(*(char *)a);a++) {
        *t = *a;
        printf("t- [%c] //a - [%c] \n", *t, *a);
    }

    
    for (; (*(char *)b); b++) {
        *t = *b;
        printf("t - [%c] ///b - [%c]\n",*t, *b);
    }

//    a= a- 8;
    printf("t - [%s] \n", t);
//    for (;(*(char *)a);a++) {
//        printf("a - [%c] \n", *a);
//    }
//    char *re = a;
    return a;
}


#pragma strlen
size_t myStrlen(const char *);

size_t myStrlen(const char * text)
{
    int i = 0;
    
    for (;(*(char *)text);text++) {
        i++;
    }
    
    return i;
}

#pragma mark main
int main(int argc, const char * argv[])
{
    printf("Hello World\n");
    printf("Strlen:%d\n", (int)myStrlen("Hello World!!!"));
    
    printf("\n\n");
//    char	*strcat(char *, const char *);
//    문자열 합치기
    
    char a[20] = "hello";
    const char *b = " world!";

    char c[20] = "hello";
    const char *d = " world!";
    
    printf("c ->%s\n",strcat(a, b));
    printf("my->%s\n",(char *)myStrcat(c, d));
    return 0;
}

