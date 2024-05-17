//
//  First Time.m
//  
//
//  Created by Tafadzwa Alexander Razaro on 2024/05/17.
//

#import <Foundation/Foundation.h>
#include <stdio.h>

int main(int argc, const char * argv[]){
    
    printf("iSAD\n");
    
    for (int x = 0; x < argc; x++) {
        printf("arg %d : %s\n", x, argv[x]);
    }
    return 0;
    
}
