#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> findIndex;

    std::string str("hola-hola-hohohohola");
    std::string substring("hola");


    for (size_t i = 0; i < str.length();)
    {
        auto findIdx = str.find(substring, i);
        if (findIdx != std::string::npos)
        {
            i = findIdx + 1;
            findIndex.push_back(findIdx);
            continue;
        }
        
        break;
    }
    

    std::cout << "find: [";
    for (auto i : findIndex)
    {
        std::cout << i << ",";
    }
    std::cout << "]\n";

    system("pause");

    return 0;
}