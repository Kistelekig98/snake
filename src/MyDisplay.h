#pragma once
#include "segmentlcd.h"
#include "segmentlcd_individual.h"
#include "game.h"
#include "MyObjects.h"


void ClearDisplay(void);		//mindkét kijelző clear (alsó és felső)
void SetSegment(coordinate );			//adott pont beálltása

void DrawSegments(void);		//kirajzoláás LCD re
void DrawSnakeAndFood(void);

void DrawScore(uint16_t);
