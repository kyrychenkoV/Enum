#include <stdio.h>
#define SIZE 7
enum BULGARCLUBS{
    Ludogorez=1,
    Litex =3,
    Beroe = 5,
    Levsky = 7,
    ChernoMore = 8,
    Loko = 10,
    Marek = 11,

    Razgrad = 1,
    Lovech = 3,
    StaraZagora = 5,
    Sofia = 7,
    Varna = 8,
    Plowdyv = 10
};
int main(int argc, char *argv[])
{
    printf ("Size enum BULGARCLUBS =%d Bayt\n",sizeof(enum BULGARCLUBS));
    int i,number,name;
    /*printf("Input the name Club of BULGARCLUB: ");
    scanf("%d",&name);*/
    int array[SIZE]={Ludogorez,Litex,Beroe,Levsky,ChernoMore, Loko,Marek};
    for (i=0;i<SIZE;i++){
        number=array[i];
        switch(f) {
        case Razgrad: printf("%d %s %s\n", f, "Ludogorez", "Razgrad");
            break;
        case  Lovech: printf("%d %s %s\n", f, "Litex", "Lovech");
            break;
        case StaraZagora: printf("%d %s %s\n", f, "Beroe","StaraZagora");
            break;
        case Sofia: printf("%d %s %s\n", f, "Levsky", "Sofia");
            break;
        case  Varna: printf("%d %s %s\n", f, "ChernoMore", "Varna");
            break;
        case  Plowdyv: printf("%d %s %s\n", f, "Loko", "Plowdyv");
            break;
        case Marek: printf("%d %s %s\n", f, "Marek", "Marek");
             break;
        }
    }
    return 0;
}
