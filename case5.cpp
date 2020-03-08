#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data{7, 4, 13, 6, 23, 10, 73, 9, 24, 124, 7, 45, 6, 1, 64, 24, 25};

    for (auto i : data)
    {
        std::cout << i << " ";
    }

    std::cout << "\n";

    int i, j, imax, temp;
    for (i = data.size() - 1; i >= 1; i--)
    {
        imax = 0;
        for (j = 1; j <= i; j++)
        {
            if (data[j] > data[imax])
            {
                imax = j;
            }
        }
        temp = data[i];
        data[i] = data[imax];
        data[imax] = temp;
    }

    for (auto i : data)
    {
        std::cout << i << " ";
    }
}