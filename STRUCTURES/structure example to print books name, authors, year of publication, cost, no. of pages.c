#include <stdio.h>
#include<string.h>

struct book
{
    char name[25];
    char author[25];
    int year;
    int cost;
    int pages;
};

int main()
{
    struct book b1 = {"Parva","S.L.Bhyrappa",1985,150,420};
    printf("Name of book = %s\n",b1.name);
    printf("Author = %s\n",b1.author);
    printf("Year of Publication = %d\n",b1.year);
    printf("Cost = %d\n",b1.cost);
    printf("pages = %d\n",b1.pages);
    printf("____________________________________________________\n");

    struct book b2 = {"Swarupa","k.p.poornachandra ",1996,350,320};
    printf("Name of book = %s\n",b2.name);
    printf("Author = %s\n",b2.author);
    printf("Year of Publication = %d\n",b2.year);
    printf("Cost = %d\n",b2.cost);
    printf("pages = %d\n",b2.pages);
    printf("____________________________________________________\n");

    struct book b3 = {"Matu Vikasa","Ravi Belagere",2015,200,120};
    printf("Name of book = %s\n",b3.name);
    printf("Author = %s\n",b3.author);
    printf("Year of Publication = %d\n",b3.year);
    printf("Cost = %d\n",b3.cost);
    printf("pages = %d\n",b3.pages);
    printf("______________________________________________________\n");

    struct book b4 = {"Kapilipisaara","Ravi Belagere",2019,100,220};
    printf("Name of book = %s\n",b4.name);
    printf("Author = %s\n",b4.author);
    printf("Year of Publication = %d\n",b4.year);
    printf("Cost = %d\n",b4.cost);
    printf("pages = %d\n",b4.pages);
    printf("_________________________________________________________");

    

    return 0;
}
