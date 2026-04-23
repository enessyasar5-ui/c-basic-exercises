#include <stdio.h>
int findmin(int a, int b, int c){
    if (a<b && a<c) {
        return a;
    }
    else if (b<a && b<c) {
        return b;
    }
   else {
       return c;
   }

}
int main() {

    printf("en kücük sayi %d",findmin(66,0,65));



}