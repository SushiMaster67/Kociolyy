#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LANCUCH "to jest lancuch znakowy"

int main()
{
/*
    char bufor[] ={"Napis z bufora\n"};
    printf("Lancuchy znakowe\n");
    printf("z define :\n");
    puts(LANCUCH);
    printf("z bufor:\n");
    puts(bufor);
    printf("wydruk bezposredni:\n");
    puts("wydruk!\n");


    printf("Lancuchy znakowe\n");
    printf("z define :\n");
    fputs(LANCUCH, stdout);
    printf("z bufor:\n");
    fputs(bufor, stdout);
    printf("wydruk bezposredni:\n");
    fputs("wydruk!\n",stdout);
    FILE *plik = fopen("dane.txt", "w");
    if(plik != NULL){
        fputs("To jest napis cwiczeniowy!\n", plik);
        fputs(bufor, plik);
        fclose(plik);
    }
   */
    char LANCUCH1[100];
    char LANCUCH2[100];



    printf("daj 1 lancuch znakowy");
    if(fgets(LANCUCH1, sizeof(LANCUCH1), stdin) != NULL){
       LANCUCH1[strcspn(LANCUCH1, "\n")] =0;
       printf("Lancuch1 to:");
       printf("%s\n", LANCUCH1);
       }
    printf("daj 2 lancuch znakowy");
    if(fgets(LANCUCH2, sizeof(LANCUCH2), stdin) != NULL){
       LANCUCH2[strcspn(LANCUCH2, "\n")] =0;
       printf("Lancuch2 to:");
       printf("%s\n", LANCUCH2);
       }
    char temp[200];
    strcpy(temp, LANCUCH1);

    strcat(temp, LANCUCH2);
    printf("polaczone lancuchy: %s\n", temp);

    strcpy(temp, LANCUCH1);
    strncat(temp , LANCUCH2 , 10);
    printf("po dodaniu 10 :");
    fputs(temp, stdout);
    printf("\n");

    for(int i = 0; i < 10; i++){
        if(LANCUCH1[i] == LANCUCH2[i]){
            continue;
        }
        if(LANCUCH1[i] != LANCUCH2[i]){
        printf("10 pierwszych znakow nie sa takie same\n");
        break;
    }
    }
    char *space1 = strchr(LANCUCH1, ' ');
    if(space1 != NULL){
        printf("W LANCUCH1 pierwsza spacja jest na pozycji %d\n", space1 - LANCUCH1);
    }else{
        printf("brak spacji w LANCUCH1");
    }
    char *space2 = strchr(LANCUCH2, ' ');
    if(space2 != NULL){
        printf("W LANCUCH2 pierwsza spacja jest na pozycji %d\n", space2 - LANCUCH2);
    }else{
        printf("brak spacji w LANCUCH2");
    }

    return 0;

}

/*
-strlen() - zwraca dlugosc lancucha
-strcpy() - kopiowanie jednego do drugiego lancucha
-strncpy() - kopiowanie z znakow z 1 do 2
-strcat() - laczenie lancuchow znakowych
-strncap() - laczenie n znakow z 2 do pierwszego
-strchar() - zwraca pozycje pierwszego wystapienia znaku
-strcmp{"Napis z bufora\n"};() - porownanie lancuchow
-strncmp() - porownaj n pierwszych znakow z lancuhow

zbuduj program ktory
- wczyta dwie linie tekstu z klawiatury
-wypisze obie linie
-polaczy oba lancuchy i wydrukuje wynik je na ekranie
- doda 10 znakow z drugiego lancucha do pierwszego
-dokona porownania 10 pierwszych znakow w lancuchach pierwotnych
- znajdzie i wydrukuje numer pierwszej pozycji ze znakime spacji ' ' w obu pierwotnych lancuchach

*/
















