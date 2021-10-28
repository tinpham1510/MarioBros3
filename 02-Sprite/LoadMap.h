#pragma once
#include"Textures.h"
#include "Game.h"
#include "Sprites.h"
#include <fstream>
#include <iostream>

#define FrameHeight 16
#define FrameWidth	16
#define MAX	300

class LoadMap
{
	LPCWSTR FilepathMap;
	int id;
	int collumns;
	int rows;
	int TileSetWidth;
	int TileSetHeight;
	int Frameheight;
	int Framewidth;
	int TileMapID[MAX][MAX];

public:
	LoadMap();
	void ReadMap();
	void DrawMap();
	void Load();
	~LoadMap();
};
