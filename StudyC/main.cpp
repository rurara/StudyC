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
char	*myStrcat(char *, const char *);

char	*myStrcat(char *a, const char *b){
    char * aChar = a;
    const char *bChar = b;
    
    int endFlage = 0;
    int countValue = 0;
    int bCount = 0;
    
    do {
        if (!aChar[countValue]) {
            
            aChar[countValue] = bChar[bCount];
            
            if (!bChar[bCount]) {
//                printf("end!!");
                break;
            }
            
            bCount ++;
        }
        countValue ++;
        
    } while (endFlage <= 0);

    return aChar;
}


#pragma strlen
size_t myStrlen(const char *);

size_t myStrlen(const char * text)
{
    const char * test = text;
    int endFlage = 0;
    int countValue = 0;
    
    do {
        if (!test[countValue]) {
            endFlage =countValue;
//            printf("end!! - %d\n", countValue);
            break;
        }
//        printf("text[%d]: %c\n",countValue, test[countValue]);
        
        countValue ++;
        
    } while (endFlage <= 0);
    return endFlage;
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

