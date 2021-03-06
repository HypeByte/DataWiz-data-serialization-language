/*
  
MIT License

Copyright (c) 2020 HypeByte
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


/*
-If the function has a C at the start of its name, it is for chars.
-If the function has a S at the start of its name, it is for strings.
This file is for creating a global set of functions that will help start the parse process.
*/

bool CmemberOf(char value, char * set) { //If value is in set, return true, else return false.

     for(int linear = 0; linear < strlen(set); linear++) { 
         if(value == set[linear]) {                        
             return true;
             break;
         }
     }
     return false;
}

void * intoSet(char * value) { //Converts strings like "1233" into "123".

     int valNum = 0; 
     int pos = 0; 
     char * valBank = (char *) malloc(valNum); 

     for(int linear = 0; linear < strlen(value); linear++) { 
         if( CmemberOf(value[linear],valBank) == false ) { 
             valNum++;                                          
             valBank = (char *) realloc(valBank,valNum);        
             valBank[pos] = value[linear];
             pos++; 
         } //Declare new set member.
     }

     strcpy(value,valBank);

}



bool SmemberOf(char * value, char  set[]) { //Sees if all the chars of value are present in set.

     for(int linear = 0; linear < strlen(value); linear++) {  
         if( CmemberOf(value[linear],set) == false) {
             return false;
         }
     } //Basic constraint system.

     return true;

}


bool subString(char * str, char * substr, int s1, int s2) { //Returns true if substr is a substring of str, s1 is the length of str, and s2 is the length of substr
     
     char * memSlot = malloc(s2);

     for(int i = 0; i < s1 - s2; i++) {

         for(int n = i; n < i + s2; n++) { 
             memSlot[n - i] = str[n];
         } 

         if(strcmp(substr,memSlot) == 0) {
             free(memSlot);
             return true;
         }

     }

    free(memSlot);
    return false;
}