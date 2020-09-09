//
//  main.c
//  exe3
//
//  Created by НУРИЯ on 9/9/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//  Nuriya Umirbekova exe3
#include <stdio.h>
#include <stdlib.h>
void read_command(char *input);
int main(){
    char input[256];
    while(1){
        read_command(input);
        system(input);
    }
    return 0;
}

void read_command(char *input){
    scanf("%256s", input);
}

