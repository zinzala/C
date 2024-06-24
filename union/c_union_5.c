// this structure is perfectly usable but only price is common property in both the items and rest are individual.
// name, author, pages and price belongs to book
// color, design, size belongs to shirt
// hence book variable doesn't possess the color,disign and size 
// therfor it is a wastage of memory
// total size of struct store is 28 byte but we can save lot of space if we start using union 
#include<stdio.h>
#pragma pack(1)
struct store{
    char *name;   // 4 byte
    char *author; // 4 byte
    int pages;    // 4 byte
    int price;    // 4 byte

    char *color;  // 4 byte
    char *design; // 4 byte
    int size;     // 4 byte
    

}book,shirt;

int main(){
    book.name = "c programing";
    book.author = "Neso Academy";
    book.pages = 314;
    book.price = 0;
    printf("%d",sizeof(book)); // 28 byte
    return 0;
}