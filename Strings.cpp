
#include <iostream>
#include <string>

using namespace std;

int main() {
	string word1, word2, word3;
  
  cin >> word1;
  cin >> word2;
  
  word3 = word1 + word2;
  
  int LenWord1, LenWord2;
  
  LenWord1 = word1.size();
  LenWord2 = word2.size();
  
  char temp = word1[0];
  
  word1[0] = word2[0];
  word2[0] = temp;
  
  cout << LenWord1 << " " << LenWord2 << endl
       << word3 << endl
       << word1 << " " << word2;
  
  return 0;
}
