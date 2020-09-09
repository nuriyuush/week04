//
//  main.c
//  exe2
//
//  Created by НУРИЯ on 9/8/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
// Nuriya Umirbekova exe2
#include <stdio.h>
#include <unistd.h>
int main() {
    for (int i=0; i < 3; i++){
        fork();
    }
    sleep(5);
}
//processing calls fork() in a loop 3 times and sleeps for 5 seconds. we will get this kind of tree
// exe2 -- exe2 -- exe2 -- exe2
// |    |    |
// |    |    exe2
// |    |
// |    | -- exe2 -- exe2
// |    |
// |    exe2
// |
// |__pstree
//when we will change the program so that it would call fork() 5 times. in the result we will have more branches (they will increase dependent to the time that we will call fork() )
