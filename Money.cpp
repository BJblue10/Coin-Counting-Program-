#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   
  std::cout << "";
  std::cin >> nickels >> dimes >> quarters;

  if(nickels < 0 || dimes < 0 || quarters < 0){
    std::cerr << "" << std::endl;
    return 1;
  }

  double dollars; = (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "" << dollars << std::endl;
   
   return 0;
}