#pragma once
#include "segmentlcd.h"
#include "segmentlcd_individual.h"
#include "MyObjects.h"
#include "MyDisplay.h"

snake MySnake;
uint16_t  MyScore;

void InitMySnake(void);
void CheckInput();				// ha jött UART adat (L vagy R) átírja a kígyó dir-jét
void MoveSnake();






