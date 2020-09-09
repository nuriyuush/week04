//
//  main.c
//  exe4
//
//  Created by НУРИЯ on 9/9/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
// Nuriya Umirbekova exe4
#include <stdio.h>
#include <stdlib.h>
int main(){
    char input[256];
    while(1)
    {
        fgets(input,256,stdin);
        char *argument[256];
        int t=0,i=0,j=0;
        for(i=0;i<256;i++){
            argument[i]=NULL;
        }
        i=0;
        argument[0]=(char*)malloc(256);
        while(1)
        {
            if(input[i]!=' ' && input[i]!='\n' && input[i]!='\0'){
                argument[t][j]=input[i];
                i++;
                j++;
            }
            else if(input[i]==' '){
                i++;
                j=0;
                t++;
                argument[t]=(char*)malloc(256);
            }
            else{
                break;
            }
        }
        int pid;
        pid = fork();
        if(pid==0){
            execvp(argument[0],argument);
        }
    }
  return 0;
}
