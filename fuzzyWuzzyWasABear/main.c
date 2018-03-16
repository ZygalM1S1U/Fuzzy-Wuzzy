//Fuzzy logic for fuzzy bear
#include "main.h"
#include "fuzzyFind.h"

int main()
{
  bool funcTruth = false;
  char nameString[] = "";
  char username[] = "";
  //Need some type of system control
  printf("Hi!  My name is Fuzzy Wuzzy.  I'm a Von Neumann bear and want to chat with you.\n");

  //add an if statement checking to see who the user is
  if(username = fuzzyGetName() == NULL)
  {
    printf("You haven't been here before have you?\n");
    printf("What's your name?\n");
    fgets(/*Throw a name in here*/);
  }
  else
  {
    printf("It seems like you've been here before.\nIsn't your name %s?\n", &username);
    
  }
}
