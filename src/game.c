#include"game.h"

void InitMySnake(void){
							// az �n k�gy�m
	MySnake.lenght = 1;
	MySnake.position[0].x = 1;
	MySnake.position[0].y = 2;
	MySnake.dir = RIGHT;
	MySnake.prevDir = RIGHT;

	MyScore=0;

}

void CheckInput() {

}

void MoveSnake(){
	for (int i = 1; i < MySnake.lenght; i++) {			// shiftel�s
		MySnake.position[i] = MySnake.position[i-1];
	}

	if (MySnake.dir == MySnake.prevDir) {				// fej �j koordin�t�j�nak be�ll�t�sa
		switch (MySnake.dir) {
			case RIGHT:
				MySnake.position[0].x += 2;	break;
			case LEFT:
				MySnake.position[0].x -= 2; break;
			case UP:
				MySnake.position[0].y += 2; break;
			case DOWN:
				MySnake.position[0].y -= 2; break;
			default: break;
		}

	} else {

	}
}
