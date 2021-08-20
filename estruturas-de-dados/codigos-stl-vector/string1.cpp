// Código adaptado de http://www.cplusplus.com/reference/string/string/string/
#include <iostream>
#include <string>

int main ()
{
  std::string s0 ("Initial string");

  // constructors used in the same order as described above:
  std::string s1;
  std::string s2 (s0);
  std::string s3 (s0, 8, 3);
  std::string s4 ("A character sequence");
  std::string s5 ("Another character sequence", 12);
  std::string s6a (10, 'x');
  std::string s6b (10, 42);      // 42 is the ASCII code for '*'
  std::string s7 (s0.begin(), s0.begin()+7);
  
  std::string s8 = "ABC";
  

  std::cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
  std::cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a;
  std::cout << "\ns6b: " << s6b << "\ns7: " << s7 << '\n';
  std::cout << s8 << "\n";
  
  std::cout << "Digite a string 9: ";
  std::string s9, s10;
  std:: cin >> s9;
  std::cout << s9 << "\n";
  
  
  
  return 0;
}
