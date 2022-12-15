#pragma once

#include "Map.h"
#include <time.h>
#include <stdlib.h>


class Enemy
{
public:
	COORD position;
private:
	char character = 'E';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::DARK_RED;
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::BLACK;

public:
	Enemy(COORD spawn);

	void Logic(Map* pacman_map);
	void Draw();

}