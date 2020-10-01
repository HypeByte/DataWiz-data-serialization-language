#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdio.h>
#include"strSets.h"

//Stores define statement constants
struct DEF {char * src; char * raw;};




//Returns the total amount of memory needed for a preprocessed line that will have a new char count. 
size_t preprocMemSize(char * line, struct DEF * defPOOL, int poolLen) { 
     int memAdditive = 0;
     
     for(int i = 0; i < poolLen; i++) {

         if( subString(line,defPOOL[i].src, (int) strlen(line), (int) strlen(defPOOL[i].src)) ) {
             memAdditive += ( (int) strlen(defPOOL[i].raw) - (int) strlen(defPOOL[i].src) );
         }

     }
     
    return  strlen(line) + memAdditive + 1;
}