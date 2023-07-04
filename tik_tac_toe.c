				    /* *****TIC TAC TOE GAME IN C****** */

#include<stdio.h>
#include<stdlib.h>
void display (char *);
void win (char *, char, int);
void playagain (char *, char, int);
void fungame ();
int
main ()
{


  fungame ();

  return 0;
}




void
fungame (void)
{
  char a[11] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', 'X', '0' };

  char change;
  char c;

  int player = 1;
  int i = 1, choice;

  display (a);

  while (i != 10)
    {
      player = (player % 2) ? 1 : 2;	//player = (player % 2) ? true : false; 

    jump:
      printf ("\tPlayer %d, enter a number:  ", player);
      scanf ("%d", &choice);
      change = (player == 1) ? 'X' : '0';

      win (a, change, player);

      if (choice == 1)
	{
	  if (a[0] == 'x' || a[0] == 'X' || a[0] == '0')	//ek step baar na chale uske liye
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[0] = change;
	      system ("cls");	// consol screen clear ke liye
	      display (a);
	    }

	}
      else if (choice == 2)
	{
	  if (a[1] == 'x' || a[1] == 'X' || a[1] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[1] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 3)
	{
	  if (a[2] == 'x' || a[2] == 'X' || a[2] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[2] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 4)
	{
	  if (a[3] == 'x' || a[3] == 'X' || a[3] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[3] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 5)
	{
	  if (a[4] == 'x' || a[4] == 'X' || a[4] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[4] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 6)
	{
	  if (a[5] == 'x' || a[5] == 'X' || a[5] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[5] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 7)
	{
	  if (a[6] == 'x' || a[6] == 'X' || a[6] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[6] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 8)
	{
	  if (a[7] == 'x' || a[7] == 'X' || a[7] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[7] = change;
	      system ("cls");
	      display (a);
	    }
	}
      else if (choice == 9)
	{
	  if (a[8] == 'x' || a[8] == 'X' || a[8] == '0')
	    {
	      printf ("\n\n\t** Invalid Move **\n");
	      goto jump;
	    }
	  else
	    {
	      a[8] = change;
	      system ("cls");
	      display (a);
	    }
	}


      else
	{
	  printf ("\n\n\t** Invalid Move **\n");
	  goto jump;
	}
      win (a, change, player);
      player++;
      i++;
    }

  if (i == 10)
    {

      printf ("\t*** THE GAME IS DRAW ***\n\n");
      playagain (a, change, player);

    }
}



/// function display


void
display (char *a)
{

  printf ("\t\t\t\t\t ****  TIC TAC TOE GAME  ****\n\n\n");
  printf ("\tPlayer 1st symbol : X\n\n");
  printf ("\tPlayer 2nd symbol : 0\n\n\n");
  printf ("\t\t\t\t\t     |       |     \n");
  printf ("\t\t\t\t\t  %c  |   %c   |   %c\n", a[0], a[1], a[2]);
  printf ("\t\t\t\t\t_ _ _| _ _ _ | _ _ _ _ \n");
  printf ("\t\t\t\t\t     |       |     \n");
  printf ("\t\t\t\t\t  %c  |   %c   |   %c\n", a[3], a[4], a[5]);
  printf ("\t\t\t\t\t_ _ _| _ _ _ | _ _ _ _ \n");
  printf ("\t\t\t\t\t     |       |     \n");
  printf ("\t\t\t\t\t  %c  |   %c   |   %c\n", a[6], a[7], a[8]);
  printf ("\t\t\t\t\t     |       |         \n\n\n");
}



// win function

void
win (char *a, char change, int player)
{
  if (a[0] == change && a[1] == change && a[2] == change)
    {
      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[3] == change && a[4] == change && a[5] == change)
    {

      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[6] == change && a[7] == change && a[8] == change)
    {

      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[0] == change && a[3] == change && a[6] == change)
    {
      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[1] == change && a[4] == change && a[7] == change)
    {
      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[2] == change && a[5] == change && a[8] == change)
    {

      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[0] == change && a[4] == change && a[8] == change)
    {

      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
  else if (a[2] == change && a[4] == change && a[6] == change)

    {
      printf ("\t*** Player %d win the GAME ***\n\n", player);
      playagain (a, change, player);
    }
}

// playagain function

void
playagain (char *a, char change, int player)
{
  char c;
  printf ("\t*** Do you want play again ***   **ENTER ::- 'Y'\n\n");
  printf ("\t*** Do you want EXIT GAME ***   **ENTER ::- 'N' \n\n");
  scanf (" %c", &c);
  if (c == 'y' || c == 'Y')
    {
      system ("cls");

      fungame ();


    }
  else
    {
      exit (0);

    }

}

