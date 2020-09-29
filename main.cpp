#include <iostream>
#include <string>

int main()
{
  std::string nbre;
  std::cout << "Veuillez choisir un nombre : ";
  std::getline (std::cin, nbre);
  std::cout << "Ton nombre est : " << nbre;
}
