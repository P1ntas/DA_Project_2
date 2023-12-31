#pragma once

#include <iostream>
#include <limits>
#include "graph2.h"
#include "filereader.h"


using namespace std;
/**
 * Class of user's interface
 */
class Menu {
public:
    /**
     * Constructor
     */
    Menu();
    /**
     * Starts user interface
     */
    static void start();

    static void interfaceNodes(Graph2 &g, filereader &file, int &dataset_number, string &dataset_file);
};