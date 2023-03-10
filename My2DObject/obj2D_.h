#pragma once

#include <string>

#include "core/gpu/mesh.h"
#include "utils/glm_utils.h"
#include "lab_m1/Tema2/Road/Road.h"


namespace obj2D_
{
    // Create the road
    Mesh* CreateRoad(const std::string& name, glm::vec3 color, bool fill = true);
    Mesh* CreateGrass(const std::string& name, glm::vec3 color, bool fill = true);
}
