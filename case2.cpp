#include <iostream>
#include <vector>

int main()
{
    std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int idx;

    int y;
    std::cin >> y;
    bool found = false;
    int i = 0;
    while (i < input.size() && !found)
    {
        if (input[i] == y)
        {
            found = true;
            break;
        }
        else
        {
            i++;
        }
    } 

    if (found == true)
        idx = i;

    else
        idx = -1;

    std::cout << idx;
}