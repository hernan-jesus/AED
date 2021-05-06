//============================================================================
// Name        : Ejemplotipos1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define NDEBUG
#include <assert.h>
int main() {
   bool a=true;
   char b='b';
   unsigned c=5;
   int d=10;
   double e=10.568;

   void assert(a==false);
   void assert(b=='c');
   void assert(c==8);
   void assert(d==7);
   void assert(e==5.00);
}
