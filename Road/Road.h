#pragma once

#include <vector>
#include <iostream>
#include <fstream>

#include "components/simple_scene.h"

class Road
{
public:
    Road();
    std::vector<std::pair<int, int>> getExtCoords();
    std::vector<std::pair<int, int>> getIntCoords();

    int nrPairs;
    std::vector<std::pair<int, int>> extCoords;
    std::vector<std::pair<int, int>> intCoords;
};

