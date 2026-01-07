#include <vector>
#include <utility> // for std::move

int main()
{
    
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = std::move(v1); 
    //move get data of v1 and fill v2 by this data; v1 is hollow; no copying has occurred

    return 0;
}
