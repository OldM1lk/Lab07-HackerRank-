
#include <iostream>
#include <string>

using namespace std;

struct Student {
  int age;
  string FirstName;
  string LastName;
  int standard;
};

int main() {
  Student st;
    
  cin >> st.age >> st.FirstName >> st.LastName >> st.standard;
  cout << st.age << " " << st.FirstName << " " << st.LastName << " " << st.standard;
  
  return 0;
}
