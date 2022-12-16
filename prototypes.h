//HERE WE HAVE THE DEFINITION OF DATA TYPE AND SOME ARRAYS, FUNCTIONS
#include <stdio.h> 
# define n 4
# define   res 0

/*Define The Data Types*/
#ifndef STD_TYPES_H
#define STD_TYPES_H
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long  u64;


typedef signed char    s8;
typedef signed short   s16;
typedef signed int     s32;
typedef signed long    s64;
					   
					   
typedef float          f32;
typedef double         f64;
typedef long double    f128;
#endif

//define arrays and functions
 u32 admin_pass[n]={1}; // array for passward of admins
 u32 actual_pass[n]={1,2,3,4}; // array for true passward
u8 books[1000][20]={"science","math","english","AI","database","Mechatronics","IT","microprocessor"}; // details about books
u8 details[1000][20]={"mcn","vsv","mos","hcud","pkc","hto","cs","ncs"}; // details about books
u32 book_count[1000]={5,7,9,1,2,3,6,7}; //The number of books in library
u32 book_price[1000]={55,77,89,101,232,13,60,97}; //Books price
u32 ID[1000]={123,345,908,90,887,237,98,675}; // BOOKS Id
 u32 pass[n]; //array for comparing passward
 u32 passward(void); // function for enter passward
 u32 admin(void); // function for admins
 u32 check_pass(void); //function for comparing passward
 void addBook(); // function for adding book to library
 void viewBooks(); // function for show all books with it details 
 void Registeration(); // function for registeration to enter
 void searchBooks();  // function for search about book in library
 void updatelibrary(); // function for update library with change