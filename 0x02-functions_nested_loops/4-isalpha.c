#include "main.h" 
int _isalpha(int c)
 {
 if(c>=97&&c<123)
 {
   return 1;
 }

 if(c>=65&&c<91)
 {
   return 1;
 }
 else{
    return 0;
 }
 }
