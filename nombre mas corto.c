#include<stdio.h>
#include<string.h>

int main()
{
    printf("aqui podras ver cual nombre es mas corto\n\n");
    char nombre1[20];
    char nombre2[20];
    char nombre3[20];
    char nombre4[20];
    char nombre5[20];
    int r1,r2,r3,r4,r5;
    int min;

    printf("introduce nombre #1: ");
    scanf("%s",nombre1);
    printf("introduce nombre #2: ");
    scanf("%s",nombre2);
    printf("introduce nombre #3: ");
    scanf("%s",nombre3);
    printf("introduce nombre #4: ");
    scanf("%s",nombre4);
    printf("introduce nombre #5: ");
    scanf("%s",nombre5);

    r1=strlen(nombre1);
     r2=strlen(nombre2);
      r3=strlen(nombre3);
       r4=strlen(nombre4);
        r5=strlen(nombre5);

    min=r1;
    if(r2<min){
            min=r2;
            }else if(r3<min){
                min=r3;
                }else if(r4<min){
                    min=r4;
                    }else if(r5<min){
                        min=r5;
                        }
    if(r1==min){
            printf ("el nombre mas corto es: %s\n", nombre1);
            }
    if(r2==min){
            printf ("el nombre mas corto es: %s\n", nombre2);
            }
    if(r3==min){
            printf ("el nombre mas corto es: %s\n", nombre3);
            }
    if(r4==min){
            printf ("el nombre mas corto es: %s\n", nombre4);
            }
    if(r5==min){
            printf ("el nombre mas corto es: %s\n", nombre5);
            }
return 0;
}






