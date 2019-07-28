#include <iostream>

// Program that helps user keep track of weight when boxing on different planets.

int main() {
  
double earthWeight;
double nonEarthWeight;
int planetNumber;
  
std::cout << "Hello, Little Mac. Welcome to INTERPLANETARY WEIGHT TRACKER!\n";
  
std::cout << "Enter your weight on Earth: " << "\n";
std::cin >> earthWeight;
std::cout << "Your weight on Earth is " << earthWeight << "\n";
std::cout << "1 - Venus\n2 - Mars\n3 - Jupiter\n4 - Saturn\n5 - Uranus\n6 - Neptune\n";
std::cout << "Enter the number of the planet you want to fight on [1-6]: " << "\n";
std::cin >> planetNumber;

switch(planetNumber){
    
  case 1 :
    nonEarthWeight = earthWeight * 0.78;
    std::cout << "On Venus, your weight is: " << nonEarthWeight << "\n";
    break;
  case 2 :
    nonEarthWeight = earthWeight * 0.39;
    std::cout << "On Mars, your weight is: " << nonEarthWeight << "\n";
    break;
  case 3 :
    nonEarthWeight = earthWeight * 2.65;
    std::cout << "On Jupiter, your weight is: " << nonEarthWeight << "\n";
    break;
  case 4 :
    nonEarthWeight = earthWeight * 1.17;
    std::cout << "On Saturn, your weight is: " << nonEarthWeight << "\n";
    break;
  case 5 :
    nonEarthWeight = earthWeight * 1.05;
    std::cout << "On Uranus, your weight is: " << nonEarthWeight << "\n";
    break;
  case 6 :
    nonEarthWeight = earthWeight * 1.23;
    std::cout << "On Neptuve, your weight is: " << nonEarthWeight << "\n";
    break;

  default:
    std::cout << "Invalid entry. Enter a planet number from 1 - 6." << "\n";
    
    std::cout << "Thank you for using INTERPLANETARY WEIGHT TRACKER. Good luck with your fights!";
   
} // end switch
 
}
