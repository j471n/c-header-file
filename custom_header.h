#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//random number  generator funciton
int random_number_generator(){

      int number;
      srand(time(0));
      number = rand() % 100; // Generating a random numberl
      return number;
}

//rock paper scissor funciton
int r_p_s_game(char var1, char var2)
{

      //in this fucntion var1 = 'user' & var2 = 'computer'

      //three variables for printing choices
      char rock[] = "rock";
      char paper[] = "paper";
      char scissor[] = "scissor";

      //if the users and computers input are same
      if (var1 == var2)
      {
            printf("Game Draw! \n");
      }

      //user choose rock where computer choose paper
      if (var1 == 'r' && var2 == 'p')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", rock, paper);
            return -1;
      }
      //user choose paper where computer choose rock
      else if (var1 == 'p' && var2 == 'r')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", paper, rock);
            return 1;
      }
      //user choose paper where computer choose scissor
      if (var1 == 'p' && var2 == 's')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", paper, scissor);
            return -1;
      }
      //user choose scissor where computer choose paper
      else if (var1 == 's' && var2 == 'p')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", scissor, paper);
            return 1;
      }
      //user choose scissor where computer choose rock
      if (var1 == 's' && var2 == 'r')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", scissor, rock);
            return -1;
      }
      //user choose rock where computer choose scissor
      else if (var1 == 'r' && var2 == 's')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", rock, scissor);
            return 1;
      }
}

//addition function
int addition(int a, int b){
      return (a+b);
}

//multiplication function
int multiply(int a, int b)
{
      return (a*b);
}

//factorial function
int factorial(int n){

      int factorial=1;
      for (int i = 1; i <= n; i++)
      {
            factorial *= i;
      }
      return factorial;
}

//check the number is prime or not
int check_prime_number(int x)
{
      int m, i;
      for (i = 2; i < x; i++)
      {
            if (x % i == 0)
                  m = 0;
      }
      if (m == 0)
            return printf("It isn't Prime Number.\n");
      else
            return printf("It is Prime Number.\n");
}

