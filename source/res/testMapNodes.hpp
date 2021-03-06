#pragma once
#include <vector>
#include <iostream>

using namespace std;

vector<double> nodes1 = {
    128,0,
    320,0,
    576,0,
    96,96,
    128,96,
    320,96,
    448,96,
    576,96,
    32,192,
    128,192,
    288,192,
    320,192,
    448,192,
    480,192,
    576,192,
    32,256,
    128,256,
    160,256,
    288,256,
    320,256,
    480,256,
    576,256,
    32,352,
    160,352,
    288,352,
    480,352,
    512,352,
    32,448,
    288,448,
    480,448
};
	
vector<unsigned int> nodeConnections1 = {
    0,1,
    0,4,
    1,2,
    1,5,
    2,7,
    3,4,
    4,5,
    5,6,
    6,7,
    6,12,
    7,14,
    8,15,
    9,16,
    9,10,
    10,11,
    10,18,
    11,12,
    11,19,
    12,13,
    13,14,
    13,20,
    14,21,
    15,16,
    15,22,
    16,17,
    17,23,
    17,18,
    18,19,
    19,20,
    22,27,
    22,23,
    23,24,
    24,28,
    24,25,
    25,29,
    25,26,
    27,28,
    28,29
};

vector<int> level1data = {2, 5, 1, 2, 6, 17, 17, 17, 10, 7, 9, 10, 7, 7, 17, 10, 10, 17, 8, 2, 1, 19, 20, 12, 11, 1, 1, 1, 1, 2, 11, 1, 2, 1, 1, 2, 2, 1, 13, 1, 1, 24, 25, 2, 13, 1, 1, 1, 2, 2, 13, 1, 1, 2, 2, 2, 2, 2, 11, 1, 1, 24, 25, 15, 14, 15, 7, 17, 7, 15, 14, 17, 15, 7, 9, 7, 7, 17, 4, 1, 1, 24, 25, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 11, 2, 2, 1, 11, 1, 1, 22, 23, 2, 2, 5, 2, 1, 1, 1, 1, 1, 2, 2, 11, 2, 2, 2, 13, 1, 2, 11, 2, 1, 6, 10, 15, 10, 7, 9, 9, 15, 7, 17, 14, 9, 7, 17, 4, 2, 1, 11, 2, 2, 11, 1, 2, 2, 1, 11, 13, 2, 2, 5, 1, 13, 2, 1, 11, 2, 2, 3, 17, 7, 14, 9, 17, 10, 15, 14, 14, 15, 17, 7, 7, 18, 1, 2, 11, 1, 1, 11, 1, 1, 1, 13, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 19, 20, 2, 2, 11, 2, 1, 1, 11, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 24, 25, 1, 1, 3, 17, 15, 17, 14, 17, 10, 17, 9, 7, 7, 7, 10, 17, 9, 7, 24, 25, 1, 2, 11, 1, 1, 1, 2, 1, 2, 1, 13, 2, 1, 2, 1, 1, 13, 1, 24, 25, 5, 1, 11, 5, 1, 1, 2, 1, 2, 1, 11, 1, 1, 1, 2, 1, 11, 21, 22, 23, 1, 2, 16, 10, 10, 7, 7, 7, 17, 10, 14, 10, 10, 10, 7, 10, 18, 2, 2, 1, 2};

int level1width = 20;
// int level1height = 15;

