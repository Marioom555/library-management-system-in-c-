//HERE WE HAVE THE STRUCTURE OF FUNCTIONS
#include "prototypes.h"
#include <string.h>


char name;

void welcomeMessage() //  welcome to the customer 
{
    
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
	printf("\n\t\t\t        =          OUR SYSTEM(MariamRawanNoran)     =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
 
}
void Registeration()  // enter name and constant password for regiseration 
{
	printf("\n\t\t\t Please ENTER YOUR NAME     (without_spaces) \n");
		scanf("%s",&name);
	printf("\n\t\t\t Please ENTER YOUR passward    (with_Enter)\n");
	 for(u32 i=0;i<4;i++){
		scanf("%i",&pass[i]);}
		 for(u32 i=0;i<1;i++){
			// if you're the admin 
			
           if (pass[i]==1&&pass[i+1]==1&&pass[i+2]==1,pass[i+3]==1)
		   {
		   admin(); 
		   break;
		   }
		   // if pass Right
		   else if (pass[i]==actual_pass[i]&&pass[i+1]==actual_pass[i+1]&&pass[i+2]==actual_pass[i+2],pass[i+3]==actual_pass[i+3])
		   { 
	       printf("\n\n\n\t\t\t\t WELCOME\n\n\n\n\n");
			  break;
		   }
           // if pass wrong		   
		   else{ 
		    printf("\n\n\n\t\t\t\tyou are not allowed \n\n\n\n\n");
		   
		   break;}
}
}

u32 admin() // function for  admins
	{
	printf(" \n\n\n\t\t\t hello sir  ** \n");           
	printf("--------------------------\n");
	  printf("\n\n\n\t\t\t PLEASE RESET PASSWORD");
	printf(" ** ** \n");
	 for(u32 i=0;i<4;i++){
		scanf("%i",&actual_pass[i]);}
		printf("  ** Thank you sir  ** \n");
}
		

void menu()  //menu for library tasks
{
	u32 choice = 0;
    do{
         printf("\n\n\n\t\t\t MAIN MENU");
        printf("\n\n\n\t\t\t1.Add Book");
        printf("\n\t\t\t2.Search Book");
        printf("\n\t\t\t3.View Books details");
        printf("\n\t\t\t4.update library");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
	    scanf("%d",&choice); // choose what you want from library
	
		
        switch(choice)
        {
		
        case 1:
            addBook();
            break;
       
		case 2:
            searchBooks();
            break;
		
        case 3:
           viewBooks();
            break;
        case 4:
            updatelibrary();
            break;
        case 0:
           printf("\n\n\n\t\t\t\t  THANK YOU FOR YOUR TIME \n\n\n\n\n");
            break;
        default:
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
			
        } 
	 	menu() ;	
	break;
	
	}while(1);
	
}


void addBook() //  function for adding books in list
{


	u32 bo = 1000; // to decreament it 
	bo--;
			 for(u32 i=bo;i>0;i--)
    {
        for(u32 j=0;j<20;j++)
        { 
	        printf("\n\n\n\t\t\t\t ADD NEW BOOK & it details  [without space] \n\n\n\n\n");
            scanf("  %s",&books[i]);
			scanf(" %s",&details[i]);
			
			break;
        }
		break;
    }
	 for(u32 i=bo;i>0;i--)
        { 
	printf("\n\n\n\t\t\t\t  book_count & id  & price[without space] \n\n\n\n\n");
           scanf("%d",&book_count[i]);
			scanf(" %d",&ID[i]);
			scanf("%d",&book_price[i]);
			
		break;
    }
	printf("\n\n\n\t\t\t\t  THANK YOU \n\n\n\n\n");
	
}

void searchBooks()  // function for search about book in library
{
	
	u8 item[20];
	u32 status=0;
	u32 x,f=0;
	printf("\n\n\t\t\tSEARCH BOOKS");
   printf("\n\n\n\t\t\t\t Enter book name you SEARCH  about [without space&lowercase] :\n\n\n\n\n");
    scanf("%s", &item);
for (u32 i = 0; i < 1000; i++) {
    if (strstr(books[i], item) != NULL) {
        printf("\n\tBook id = %i",ID[i]);
        printf("\t\tBook name = %s\n",books[i]);
        printf("\tBook details = %s",details[i]);
		printf("\tBook details = %i", book_count[i]);
		printf("\tBook price = %i", book_price[i]); 
		 f=1;
    }
    }
if(f==0)
		 printf("\n\t\t\t THIS BOOK IS NOT FOUND");
 
}
void viewBooks()  // function for show all books with it details 
{
	u32 item[20];
	for (u32 i = 0; i < 8; i++) {
	 if (books[i] != NULL) {
        printf("\n\tBook id = %i",ID[i]);
        printf("\t\tBook name = %s\n",books[i]);
        printf("\tBook details = %s",details[i]);
		printf("\tBook count  = %i\n", book_count[i]);
		printf("\tBook price = %i\n", book_price[i]); 
		printf("\t----------------------------------------------------");
    }
 
}
	
}

void updatelibrary() // function for update library with change
{
	u8 item[20];
	u32 status=0;
	u32 x=0;
   printf("\n\n\n\t\t\t\t Enter book name and number of copies you need [without space&lowercase] :\n\n\n\n\n");
    scanf("%s", &item);
	scanf("%i", &x);
for (u32 i = 0; i < 1000; i++) 
{
	 if (strstr(books[i], item) != NULL) 
	 {
		 if (x<book_count[i]){
			 status=book_count[i]-x;
	 book_count[i]=status;
		 break;
		 }
		 else
			  printf("\n\n\n\t\t\t\t WE DON'T HAVE THIS COPIES \n\n\n\n\n");
		}
}
 
}