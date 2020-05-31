# getFullName
give gcc a readable type name. (like msvc)

you can use this code in GCC, clang or msvc.

such as:

```cpp
#include <iostream>
#include <string>
#include "getFullName.h"

using namespace std;

int main(){
  string name("Bob");
  cout<<getFullName(name)<<endl;
  cout<<getFullName<string>()<<endl;
  return 0;
}
```
output:

```cpp
std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
```
