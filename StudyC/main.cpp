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
 void	*memset(void *, int, size_t);
 char	*strcat(char *, const char *);
 char	*strchr(const char *, int);
 int	 strcmp(const char *, const char *);
 char	*strcpy(char *, const char *);
 size_t	 strlen(const char *);
 char	*strncat(char *, const char *, size_t);
 int	 strncmp(const char *, const char *, size_t);
 char	*strncpy(char *, const char *, size_t);
*/

size_t myStrlen(const char *);

size_t myStrlen(const char *)
{
    return 0;
}


int main(int argc, const char * argv[])
{
    printf("Hello World\n");
    
    printf("Strlen:%d\n", (int)myStrlen("Hello World"));
    
    

    return 0;
}

