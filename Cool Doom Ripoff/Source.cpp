#include <iostream>
#include "Player.h"
#include "Map.h"

int main() {
	Map* m = new Map(20, 20);
	m->render();
	std::cout << "hello world";
	return 0;
}