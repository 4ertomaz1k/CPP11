#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> list = {4,5,5,7,8,2,1};

    //[outside variable](accepted arguments){code}
    std::sort(list.begin(), list.end(), [](int a, int b)
    {
        return a < b;
    });

    for(int x: list)
    {
        std::cout<< x << std::endl;
    }

    return 0;

}