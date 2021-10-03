
#include <algorithm>
2
.
3
int main()
4
{
5
    std::string str = "H e l l o";
6
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
7
    std::cout << str; // Output Hello
8
    
9
    return 0;
10
}
