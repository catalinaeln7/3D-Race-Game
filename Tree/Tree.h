#pragma once

#include <vector>
#include <iostream>
#include <fstream>

#include "components/simple_scene.h"
#include "../defines.h"

class Tree
{
public:
    Tree();

protected:
    int trunkHeight;
    int trunkWidth;
    int crownHeight;
    int crownWidth;
    glm::vec3 trunkColor;
    glm::vec3 crownColor;
    int offset;
};

