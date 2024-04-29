#include <iostream>
#include <ctime>
int main()
{
   srand(time(0));
   int randNum = rand() % 5 + 1;

   switch (randNum)
   {
   case 1: 
      std::cout << "YOu win the Ultimate bunny !!!!!!\n";
      break;
   case 2: 
      std::cout << "You win a t-shirt !\n";
      break;
   case 3: 
      std::cout << "You win concert tickets !\n";
      break;
   case 4: 
      std::cout << "You win a a romantic trip to Paris !\n";
      break;
   case 5: 
      std::cout << "You win a boat !\n";
      break;
   } 
   return 0;}