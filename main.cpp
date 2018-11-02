#include<iostream>
#include"Farm.h"
  int main(){
     Farm Willy;{
         Willy.get();
         Willy.setProtected(111, 100);
         Willy.getPrivate();
         Willy.setPublic("Willy",20);
         Willy.getPublic();
     }
          Farm Billy;{
         Billy.get();
         Billy.setProtected(444, 120);
         Billy.getPrivate();
         Billy.setPublic("Billy",420);
         Billy.getPublic();
          }
         Farm Dilly; {
          Dilly.get();
         Dilly.setProtected(3433, 1990);
         Dilly.getPrivate();
         Dilly.setPublic("Dilly",4420);
         Dilly.getPublic();

     }
     system("pause");
     return 0;



}
