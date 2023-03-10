#include "obj2D_.h"

#include <vector>

#include "core/engine.h"
#include "utils/gl_utils.h"
#include "lab_m1/Tema2/Road/Road.h"


Mesh* obj2D_::CreateRoad(
    const std::string& name,
    glm::vec3 color,
    bool fill)
{
    Road myRoad;
    std::vector<VertexFormat> vertices;

    std::vector<std::pair<int, int>> extCoords = myRoad.getExtCoords();
    std::vector<std::pair<int, int>> intCoords = myRoad.getIntCoords();
    int nrPairs = extCoords.size();

    for (int i = 0; i < nrPairs; ++i) {
        vertices.push_back(VertexFormat(glm::vec3(extCoords[i].first, 0, extCoords[i].second), color));
        vertices.push_back(VertexFormat(glm::vec3(intCoords[i].first, 0, intCoords[i].second), color));
    }

    Mesh* road = new Mesh(name);
    road->SetDrawMode(GL_TRIANGLE_STRIP);

    std::vector<unsigned int> indices;
    for (int i = 0; i < nrPairs * 2; ++i) {
        indices.push_back(i);
    }
    indices.push_back(0);

    road->InitFromData(vertices, indices);

    return road;
}

Mesh* obj2D_::CreateGrass(
    const std::string& name,
    glm::vec3 color,
    bool fill)
{
    std::vector<VertexFormat> vertices =
    {
        VertexFormat(glm::vec3(-500, -1, -400), color),
        VertexFormat(glm::vec3(500, -1, -400), color),
        VertexFormat(glm::vec3(500, -1, 400), color),
        VertexFormat(glm::vec3(-500, -1, 400), color)
    };

    Mesh* square = new Mesh(name);
    std::vector<unsigned int> indices = { 0, 1, 2, 3 };

    if (!fill) {
        square->SetDrawMode(GL_LINE_LOOP);
    }
    else {
        // Draw 2 triangles. Add the remaining 2 indices
        indices.push_back(0);
        indices.push_back(2);
    }

    square->InitFromData(vertices, indices);
    return square;
}