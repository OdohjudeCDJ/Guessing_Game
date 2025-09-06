                                        //------> GUESSING GAME <------//
/*The player has a chance of 3 trials for each round,
  the secret number is revealed after the 3 chances have been exaushted.
  
  The player can either exit the game or play again and another secret number is set guessing.
  Enjoy the game.
  */
#include <iostream> 
#include <stdlib.h> //allows working with the random number generator function.
#include <ctime> //


int main(){
int secret_number,guess,choice,level; //some variables to store data for the game.
int count =1; //this variable holds the number of trials and it sets the limit. 

// time_t currentTime;
// time(&currentTime);
// std::cout<<ctime(&currentTime)<<std::endl;
//     while(true){
//         if(ctime(&currentTime) == "22:22:00"){
//             std::cout<<"Yeah"<<std::endl;
//             break;
//         }
//     }

std::cout<<"WELCOME TO \"GUESS LIKE A PRO\""<<std::endl;
std::cout<<"Select level to play."<<std::endl;
std::cout<<"1.Easy.\n2.Hard.\n3.Difficult.\n   ::";
std::cin>>level;

switch(level){
   //EASY LEVEL//
   case 1:{
      j: // label j

srand(time(0)); //this function generates the number using a seed from the ctime header file.
secret_number = (rand() %10) +1; //sets the range, i.e between 1 and 10.

m:
std::cout<<"Guess the number \nIt's a number between 1 and 10\t::";
std::cin>>guess;


if(guess != secret_number){
   while(count<3)
   {
   std::cout<<"wrong try again"<<std::endl;
   count += 1;
   goto m;
   }
   std::cout<<"You loose, secret number is: "<<secret_number<<std::endl;
   count =1;
   b:
   std::cout<<"1.Play again  \n2.Exit game.\n::";
   std::cin>>choice;

   switch(choice){
    case 1:
       goto j;
       break;

    case 2:
       system("pause"); 
       break;

    default:
        std::cout<<"Enter a valid choice"<<std::endl;
               
   }
}

else if(guess == secret_number){
    std::cout<<"Excellent , You are a pro!!!"<<std::endl;
    goto b;

}

   break;
   }

   case 2:{
      //HARD LEVEL//
      k: // label j

srand(time(0)); //this function generates the number using a seed from the ctime header file.
secret_number = (rand() %20) +1; //sets the range, i.e between 1 and 10.

p:
std::cout<<"Guess the number \nIt's a number between 1 and 20\t::";
std::cin>>guess;


if(guess != secret_number){
   while(count<3)
   {
   std::cout<<"wrong try again"<<std::endl;
   count += 1;
   goto p;
   }
   std::cout<<"You loose, secret number is: "<<secret_number<<std::endl;
   count =1;
   c:
   std::cout<<"1.Play again  \n2.Exit game.\n::";
   std::cin>>choice;

   switch(choice){
    case 1:
       goto k;
       break;

    case 2:
       system("pause"); 
       break;

    default:
        std::cout<<"Enter a valid choice"<<std::endl;
               
   }
}

else if(guess == secret_number){
    std::cout<<"Excellent , You are a pro!!!"<<std::endl;
    goto c;

}

   break;
   }

   case 3:{
      //DIFFICULT LEVEL//
      f: // label j

srand(time(0)); //this function generates the number using a seed from the ctime header file.
secret_number = (rand() %30) +1; //sets the range, i.e between 1 and 10.

t:
std::cout<<"Guess the number \nIt's a number between 1 and 30\t::";
std::cin>>guess;


if(guess != secret_number){
   while(count<5)
   {
   std::cout<<"wrong try again"<<std::endl;
   count += 1;
   goto t;
   }
   std::cout<<"You loose, secret number is: "<<secret_number<<std::endl;
   count =1;
   g:
   std::cout<<"1.Play again  \n2.Exit game.\n::";
   std::cin>>choice;

   switch(choice){
    case 1:
       goto f;
       break;

    case 2:
       system("pause"); 
       break;

    default:
        std::cout<<"Enter a valid choice"<<std::endl;
               
   }
}

else if(guess == secret_number){
    std::cout<<"Excellent , You are a pro!!!"<<std::endl;
    goto g;

}

   break;
   }

   default:
      std::cout<<"Invalid input"<<std::endl;
   break;   

}


    return 0;
}
