#include "MyDisplay.h"


SegmentLCD_UpperCharSegments_TypeDef upperCharSegments[SEGMENT_LCD_NUM_OF_UPPER_CHARS];
SegmentLCD_LowerCharSegments_TypeDef lowerCharSegments[SEGMENT_LCD_NUM_OF_LOWER_CHARS];

void DrawScore(uint16_t s){
	SegmentLCD_Number(s);
}

void DrawSegments(void){
	SegmentLCD_UpperSegments(upperCharSegments);
	SegmentLCD_LowerSegments(lowerCharSegments);
}


void ClearDisplay(void){		//mindkét kijelző clear
	for(int i=0; i <= SEGMENT_LCD_NUM_OF_LOWER_CHARS ;i++){
		lowerCharSegments[i].raw=false;
	}
	for(int i=0; i <= SEGMENT_LCD_NUM_OF_UPPER_CHARS  ;i++){
		upperCharSegments[i].raw=false;
		}

	SegmentLCD_UpperSegments(upperCharSegments);
	SegmentLCD_LowerSegments(lowerCharSegments);
}

void SetSegment(coordinate c){
	uint8_t digit;

	if (c.x < 14) {
		digit = c.x / 2;

		switch (c.y) {
			case 0:
				lowerCharSegments[digit].d = true; break;
			case 1:
				lowerCharSegments[digit].e = true; break;
			case 2:
				lowerCharSegments[digit].g = true;
				lowerCharSegments[digit].m = true; 	break;
			case 3:
				lowerCharSegments[digit].f = true; break;
			case 4:
				lowerCharSegments[digit].a = true; break;
			default: break;
		}
	} else {
		switch (c.y) {
			case 1:
				lowerCharSegments[6].c = true; break;
			case 3:
				lowerCharSegments[6].b = true; break;
			default: break;
		}
	}
}

void DrawSnakeAndFood(void){
	for(int i=0; i < MySnake.lenght; i++){
		SetSegment(MySnake.position[i]);
	}

	DrawSegments();

}


