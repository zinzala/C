// this program is an application of union 
// we save lots of memory in comparision to structure program

#include<stdio.h>
struct store{
    float price;           // 4 byte
    union{
        struct 
        {
            char *name;    // 4 byte
            char *author;  // 4 byte
            int page;      // 4 byte
        }book;
        
        struct{
            char *design;  // 4 byte
            char *color;   // 4 byte
            int size;      // 4 byte
        }shirt;
    }item;
};
int main(){
    struct store var;
    var.item.book.name = "c programming";
    var.item.book.author = "Neso Academy";
    var.item.book.page = 314;
    var.price = 0;
    
    printf("%s\n",var.item.book.name);  // c programing
    printf("%d",sizeof(struct store));  // 16
    return 0;
}