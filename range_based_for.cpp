#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};

    //like python: for x in nums
    for (int x : nums)
    {
        std::cout << x << " ";
    }

    
    //but more efficient if we wont only watching
        
        std::vector<std::string> words = {"very_long_string_...", "another_huge_string_..."};

        //bad: copy of every string in every itaration and slow
        //for (auto s : words) { ... } 

        //good: 
        for (const auto& s : words)
        { 
            std::cout << s; 
        }

        //of course if we need to change something, we dont write const
        for (auto& s : words)
        {
            s += "!"; 
        }

    return 0;
}