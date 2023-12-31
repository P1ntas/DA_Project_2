#pragma once

#include <string>
#include "graph2.h"


class filereader {

public:
    filereader();
    Graph2 load_database(const std::string& file_name);
    pair<int, int> chooseNodes(Graph2 graph, int choice);
};