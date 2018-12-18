#include "em_device.h"
#include "em_chip.h"
#include "segmentlcd.h"
#include "segmentlcd_individual.h"
#include "MyObjects.h"
#include "MyDisplay.h"
#include"game.h"

int main(void)
{
  /* Chip errata */
  CHIP_Init();
  SegmentLCD_Init(false);
  ClearDisplay();
/*
  coordinate c1;
  coordinate c2;
  coordinate c3;

  c1.x=14;
  c1.y=1;

  c2.x=14;
  c2.y=3;

  c3.x=13;
  c3.y=2;
  SetSegment(c1);
  SetSegment(c2);
  SetSegment(c3);
  DrawSegments();
  */
  InitMySnake();

  DrawSnakeAndFood();
  int k=0;
  long long int alma =0;


  /* Infinite loop */
  while (1) {
	 ClearDisplay();
	  MoveSnake();
	  for(int d=0;d<955555;d++);
	 // for (alma = 0; alma < 60000000000000; alma++){}

	  DrawSnakeAndFood();
  }


  return 0;
}

