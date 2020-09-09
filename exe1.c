//
//  main.c
//  exe1
//
//  Created by НУРИЯ on 9/8/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
// Nuriya Umirbekova exe1
#define _XOPEN_SOURCE 600
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
    int n=10;
    pid_t pid=fork();
    
    for (int i=0; i<=n; ++i){
        if (pid>0){       //parent
            printf("Hello from parent [%d - %d]\n", getpid(), i);
        }
        else if (pid==0) { //child
            printf("Hello from child [%d - %d]\n", getpid(), i);
        }
        else {
            return EXIT_FAILURE;
        }
    }
    return 0;
}

//from running this code several times we can see that "parent" and "child" are shuffled
//If the parent process exits after the child process, the result will be as expected.
//If the parent process exits before the child process, the output may be unexpected (before the parent no longer exists, the parent's ID will be different).
