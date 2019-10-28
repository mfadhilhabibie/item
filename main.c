#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char item[20];
    int stat;
    char lnjt = 'y';
    bool i = 1;
    char prev_item;
    char item_hebat[20];
    char item_lemah[20];
    int stat_hebat;
    int stat_lemah;

    while(lnjt=='y'){
    printf("masukan nama itemnya : ");
    scanf("%s", &item);
    printf("Masukan statnya : ");
    scanf("%d", &stat);
    printf("Item anda adalah : %s \n", item);
    printf("Statnya : %d \n", stat);

    if (i==1){
        item_hebat = item;
        item_lemah = item;
        stat_hebat = stat;
        stat_lemah = stat;
    }else if(stat > stat_hebat) {
                stat_hebat = stat;
                item_hebat = item;
    }else if(stat < stat_lemah) {
                stat_lemah = stat;
                item_lemah = item;
            }

    printf("Item Sebelumnya : Nothing\n");
    printf("Item Terlemah : %s\n", item);
    printf("Item Terhebat : %s\n", item);


    printf("Mau Input Lagi? (y/n)"); scanf("%c",&lnjt);
    return 0;
}
