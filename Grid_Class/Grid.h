#include <iostream>
#include <vector>

using namespace std;


class Grid {

    // int width;
    // int height;
    public:
    std::vector<std::vector<string>> grid; // Use a 2D vector as the grid


public:
    Grid();
    void refresh();

};