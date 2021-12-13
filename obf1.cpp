#include <iostream>
#include <string>
#include "obfy/instr.h"

int generatePass(const std::string& log) {
  std::string pass = log;
  OBF_BEGIN
  return pass.size()*N(515);
  OBF_END
}



int main() {
  std::string login;
  std::string password;
  std::cout << "Enter login: ";
  std::cin >> login;
  int actualPass = generatePass(login);
  std::cout << "Enter pass: ";
  std::cin >> password;
  OBF_BEGIN
  IF(std::stoi(password) == actualPass)
    std::cout << "Very important info";
  ELSE
    std::cout << "Wrong password";
  ENDIF
  OBF_END
  return 0;
}
