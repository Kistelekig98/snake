#pragma once
#include "segmentlcd.h"
#include "segmentlcd_individual.h"
#include "MyObjects.h"
#include "MyDisplay.h"

snake MySnake;
uint16_t  MyScore;

void InitMySnake(void);
void CheckInput();				// ha j�tt UART adat (L vagy R) �t�rja a k�gy� dir-j�t
void MoveSnake();






