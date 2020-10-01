/*
  
MIT License

Copyright (c) 2020 HypeByte

*/

//Standard Compiler Sets (Expect more to be added)
#define S_Global "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@$%^*+=-/\"(){}.%?"
#define S_intEq "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@$%^*+(){}%?"
#define S_doubleEq "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@$%^*+(){}.%?"
#define S_boolEq "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@$(){}><|%?"

bool CmemberOf(char value, char * set);
void * intoSet(char * value);
bool SmemberOf(char * value, char  set[]);
bool subString(char * str, char * substr, int s1, int s2);