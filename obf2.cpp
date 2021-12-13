#include <iostream>
#include <string>

int generatePass(const std::string& log) {
  std::string pass = log;
  return pass.size()*0x203;
}


int main() {
  std::string m428821350e9691491f616b754cd8315fb86d797ab35d843479e732ef90665324;
  std::string u5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8;
  std::cout << "\x45\x6e\x74\x65\x72\x20\x6c\x6f\x67\x69\x6e\x3a\x20";
  std::cin >> m428821350e9691491f616b754cd8315fb86d797ab35d843479e732ef90665324;
  int actualPass = generatePass(m428821350e9691491f616b754cd8315fb86d797ab35d843479e732ef90665324);
  std::cout << "\x45\x6e\x74\x65\x72\x20\x70\x61\x73\x73\x3a\x20";
  std::cin >> u5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8;
  if (std::stoi(u5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8) == actualPass)
    std::cout << "\x56\x65\x72\x79\x20\x69\x6d\x70\x6f\x72\x74\x61\x6e\x74\x20\x69\x6e\x66\x6f";
  else
    std::cout << "\x57\x72\x6f\x6e\x67\x20\x70\x61\x73\x73\x77\x6f\x72\x64";
  return 0;
}
