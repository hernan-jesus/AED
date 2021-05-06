//============================================================================
// Name        : Ejemplotipos1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define NDEBUG
#include <cassert>
int main() {
   //Boolean
   void assert(false!=true);
   //Unsigned
   void assert(1+1==2);
   //Int
   void assert(1-2==-1);
   //Char
   void assert('c'=='c');
   //Double
   void assert(3.0/2.0==1.5);
   //String
   void assert("hola "+"mundo"="hola mundo");
}
