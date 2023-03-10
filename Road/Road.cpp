#include "Road.h"
#include <fstream>
#include <string>

using namespace std;

Road::Road() {
	nrPairs = 0;

	string filename = "src/lab_m1/Tema2/Road/road_coord.txt";

	FILE* fin = fopen(filename.c_str(), "r");

	if (NULL == fin) {
		std::cout << "Fisierul nu a putut fi deschis\n";
		exit(-1);
	}

	int r = fscanf(fin, "%d", &nrPairs);
	for (int i = 0; i < nrPairs; ++i) {
		int x, y;
		int r = fscanf(fin, "%d%d", &x, &y);
		extCoords.push_back(std::make_pair(x, y));
	}

	for (int i = 0; i < nrPairs; ++i) {
		int x, y;
		int r = fscanf(fin, "%d%d", &x, &y);
		intCoords.push_back(std::make_pair(x, y));
	}

	fclose(fin);
}

std::vector<std::pair<int, int>> Road::getExtCoords() {
	return this->extCoords;
}

std::vector<std::pair<int, int>> Road::getIntCoords() {
	return this->intCoords;
}