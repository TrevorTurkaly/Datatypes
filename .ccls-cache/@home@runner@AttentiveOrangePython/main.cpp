#include <iostream>

/*

*/

int main() {

  int pennyInput = 0;

   std::cout<<"Please, enter the penny count : ";
   std::cin>>pennyInput;
   std::cout<<std::endl;

  int dollarCount = 0;
  int dollarValue = 100;
  int quarterCount = 0;
  int quarterValue = 25;
  int dimeCount = 0;
  int dimeValue = 10;
  int nickelCount = 0;
  int nickelValue = 5;
  int pennyCount = 0;
  int pennyValue = 1;

  dollarCount = pennyInput / dollarValue; 
  pennyInput = pennyInput % dollarValue;

  quarterCount = pennyInput / quarterValue;
  pennyInput = pennyInput % quarterValue;

  dimeCount = pennyInput / dimeValue;
  pennyInput = pennyInput % dimeValue;

  nickelCount = pennyInput / nickelValue;
  pennyInput = pennyInput % nickelValue;

  pennyCount = pennyInput / pennyValue;
  pennyInput = pennyInput % pennyValue;

   std::cout << "Dollars = " <<dollarCount<<std::endl;
   std::cout << "Quarters = " <<quarterCount<<std::endl;
   std::cout << "Dimes = " <<dimeCount<<std::endl;
   std::cout << "Nickels = " <<nickelCount<<std::endl;
   std::cout << "Pennies = " <<pennyCount<<std::endl;
}