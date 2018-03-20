//Fuzzy logic for fuzzy bear
#include "main.h"
#include "fuzzyFind.h"
#define DEBUG 1

int main()
{
  printFuzzy();
  bool funcTruth = false;
  char nameString[32] = "";
  char username[32] = "";
  //Need some type of system control
  printf("Hi!  My name is Fuzzy Wuzzy.  I'm a Von Neumann bear and want to chat with you.\n");
  printf("\n");
  //add an if statement checking to see who the user is
  if(/*username = fuzzyGetName()*/funcTruth == NULL)
  {
    printf("You haven't been here before have you?\n");
    printf("What's your name?\n");
    fgets(nameString, sizeof(nameString), stdin);
#ifndef DEBUG
    printf("%s has be added to the knowledge base....\n", &nameString);
#endif
    printf("So, %s\b; where are you from?\n", &nameString);
  }
  else
  {
#ifndef DEBUG
    printf("Displaying knowledge base....\n");
#endif
    printf("It seems like you've been here before.\nIsn't your name %s?\n", &username);
  }
}

void printFuzzy(void)
{
  FILE *fptr;

   char filename[100] = "fuzzyPrint.txt";
   char c = 0;

   // Open file
   fptr = fopen(filename, "r");
   if (fptr == NULL)
   {
       printf("Cannot open file \n");
       exit(0);
   }

   // Read contents from file
   c = fgetc(fptr);
   while (c != EOF)
   {
       printf ("%c", c);
       c = fgetc(fptr);
   }
   printf("\n");
   fclose(fptr);
}
