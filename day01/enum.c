 #include <stdio.h>
 
  void main(){
    enum season {SPRING = 5, SUMMER, AUTUMN, WINTER} s;
    s = AUTUMN;
    printf("%d\n", s);
 
    s = WINTER;
    printf("%d\n", s);

 }
