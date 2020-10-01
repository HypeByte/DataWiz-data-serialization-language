/*
  
MIT License

Copyright (c) 2020 HypeByte
*/


struct DEF {char * src; char * raw;}; //Stores preprocesser define statements

//Returns the total amount of memory needed for a preprocesses line that will have a new char count. 
size_t preprocMemSize(char * line, struct DEF * defPOOL, int poolLen); 