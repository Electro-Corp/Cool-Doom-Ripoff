#pragma once
#include <iostream>


class Map
{
	int sizex, sizey;
	char** map;
	public:
		Map(int x, int y) {
			this->sizex = x;
			this->sizey = y;
			this->map = new char* [sizey];
		}

		void init() {
			for (int y = 0; y < sizey; y++) {
				for (int x = 0; x < sizex; x++) {
					map[x] = new char[sizex];
					map[x][y] = '0';
				}
			}
		}

		void render() {
			for (int y = 0; y < sizey; y++) {
				for (int x = 0; x < sizex; x++) {
					std::cout << map[x][y];
				}
			}
		}
};

