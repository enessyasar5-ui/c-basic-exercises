#include <stdio.h>

void cmToinch ()
    {
        float cm;
        printf("cm_to_inch: \n");
        scanf("%f" , &cm);
        float inch = cm / 2.54;
        printf(" %f inch\n",inch);


    }
    void not_hesaplama ()
    {
        float lab , midterm , final,toplam;

printf("lab notu: : ");
    scanf("%f" ,&lab);
    printf("midterm notu : ");
    scanf("%f", &midterm);
    printf("final notu : ");
    scanf("%f", &final);


    lab = lab*0.1;
    midterm = midterm * 0.3;
    final = final*0.6;
    toplam = lab + midterm + final;
    printf("toplam notu : %.2f ", toplam);
    }
int main() {
    cmToinch();
    not_hesaplama();

}

