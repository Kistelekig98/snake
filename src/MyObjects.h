#pragma once
#include<stdlib.h>
#include "em_device.h"
#include "em_chip.h"

typedef struct{		// kígyó ilyen pontokból áll
	uint8_t x;
	uint8_t y;
}coordinate;

typedef enum direction{
	UP =0,
	DOWN=1,
	RIGHT=2,
	LEFT=3
}direction;

typedef struct{
	coordinate position[100];	// 0. eleme a fej
	int lenght;
	direction dir;
	direction prevDir;
}snake;
