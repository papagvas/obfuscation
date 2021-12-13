#include <iostream>
#include <string>

int generatePass(const std::string& log) {
  std::string pass = log;
  return pass.size()*515;
}


int main() {
  std::string login;
  std::string password;
  std::cout << "Enter login: ";
  std::cin >> login;
  int actualPass = generatePass(login);
  std::cout << "Enter pass: ";
  std::cin >> password;
  if (std::stoi(password) == actualPass)
    std::cout << "Very important info";
  else
    std::cout << "Wrong password";
  return 0;
}
