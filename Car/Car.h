#pragma once

#include <vector>
#include <iostream>
#include <fstream>

#include "components/simple_scene.h"
#include "../defines.h"

class Car
{
public:
    Car();

protected:
    int height;
    int width;
    glm::vec3 carColor;
};

