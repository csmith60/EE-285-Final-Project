#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//where scores are saved
struct score {
	int one;
	int two;
	int three;
	int four;
	int five;
	int six;
	int ThreeofKind;
	int FourofKind;
	int FullHouse;
	int SmallStraight;
	int LargeStraight;
	int Yahtzee;
	int Yahtzee2;
	int Yahtzee3;
	int Chance;
};
//main function
int main() {
	char name[20];
	int dice[5];
	int r1hold[5];
	int h[5];
	int choice;
	int bonus = 0;
	int bonush;
	int finalscore;
	srand(time(NULL));

	struct score scr;
	scr.one = 0;
	scr.two = 0;
	scr.three = 0;
	scr.four = 0;
	scr.five = 0;
	scr.six = 0;
	scr.FullHouse = 0;
	scr.ThreeofKind = 0;
	scr.FourofKind = 0;
	scr.LargeStraight = 0;
	scr.SmallStraight = 0;
	scr.Chance = 0;
	scr.Yahtzee = 0;
	scr.Yahtzee2 = 0;
	scr.Yahtzee3 = 0;

	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;
	int six = 0;
	int Full = 0;
	int Three = 0;
	int Four = 0;
	int Small = 0;
	int Large = 0;
	int Yahtzee = 0;
	int Chance = 0;


	//intro and hold dice
	printf("Welcome to the game of Yahtzee!\nPlease enter your name to roll: ");
	scanf("%s", &name);
	while (!one || !two || !three || !four || !five || !six
		|| !Full || !Three || !Four || !Yahtzee || !Chance) {
		for (int i = 0; i < 5; i++) {
			dice[i] = rand() % 6 + 1;
			r1hold[i] = dice[i];
		}
		printf("Roll 1: %d %d %d %d %d\n", dice[0], dice[1], dice[2], dice[3], dice[4]);
		printf("\nPlease enter a 1 to hold the dice or a 0 to reroll the dice.\nPlace a space between each number: ");
		scanf("%d %d %d %d %d", &h[0], &h[1], &h[2], &h[3], &h[4]);
		if (h[0] == 0) {
			dice[0] = rand() % 6 + 1;
		}
		if (h[1] == 0) {
			dice[1] = rand() % 6 + 1;
		}
		if (h[2] == 0) {
			dice[2] = rand() % 6 + 1;
		}
		if (h[3] == 0) {
			dice[3] = rand() % 6 + 1;
		}
		if (h[4] == 0) {
			dice[4] = rand() % 6 + 1;
		}
		printf("Roll 2: %d %d %d %d %d\n", dice[0], dice[1], dice[2], dice[3], dice[4]);
		printf("\nPlease enter a 1 to hold the dice or a 0 to reroll the dice.\nPlace a space between each number: ");
		scanf("%d %d %d %d %d", &h[0], &h[1], &h[2], &h[3], &h[4]);
		if (h[0] == 0) {
			dice[0] = rand() % 6 + 1;
		}
		if (h[1] == 0) {
			dice[1] = rand() % 6 + 1;
		}
		if (h[2] == 0) {
			dice[2] = rand() % 6 + 1;
		}
		if (h[3] == 0) {
			dice[3] = rand() % 6 + 1;
		}
		if (h[4] == 0) {
			dice[4] = rand() % 6 + 1;
		}
		printf("Roll 3: %d %d %d %d %d\n\n", dice[0], dice[1], dice[2], dice[3], dice[4]);

		//print catagories
		if (one == 0) {
			printf("Ones-1:\n");
		}
		if (two == 0) {
			printf("Twos-2:\n");
		}
		if (three == 0) {
			printf("Threes-3:\n");
		}
		if (four == 0) {
			printf("Fours-4:\n");
		}
		if (five == 0) {
			printf("Fives-5:\n");
		}
		if (six == 0) {
			printf("Sixes-6:\n");
		}
		if (Full == 0) {
			printf("Full House-7:\n");
		}
		if (Three == 0) {
			printf("Three of a Kind-8:\n");
		}
		if (Four == 0) {
			printf("Four of a Kind-9:\n");
		}
		if (Small == 0) {
			printf("Small Straight-10:\n");
		}
		if (Large == 0) {
			printf("Large Straight-11:\n");
		}
		if (Yahtzee == 0) {
			printf("First Yahtzee-12:\n");
		}
		if (Chance == 0) {
			printf("Chance-13:\n");
		}
		if (scr.Yahtzee2 == 0) {
			printf("Second Yahtzee-14:\n");
		}
		if (scr.Yahtzee3 == 0) {
			printf("Third Yahtzee-15:\n");
		}
		//selection and addition for dice
		printf("Please select the catagory you want by typing the number assigned to the catagory:");
		scanf("%d", &choice);
		int hold;
		for (int i = 0; i < 5;i++) {
			for (int j = i + 1;j < 5;j++) {
				if (dice[i] > dice[j]) {
					hold = dice[i];
					dice[i] = dice[j];
					dice[j] = hold;
				}
			}
		}
		if (choice == 1) {
			int uno = 0;
			for (int i = 0;i < 5;i++) {
				if (dice[i] == 1) {
					uno += 1;
				}
			}
			one = 1;
			scr.one = uno;
		}
		if (choice == 2) {
			int dos = 0;
			for (int i = 0;i < 5;i++) {
				if (dice[i] == 2) {
					dos += 2;
				}
			}
			two = 1;
			scr.two = dos;
		}
		if (choice == 3) {
			int tres = 0;
			for (int i = 0;i < 5;i++) {
				if (dice[i] == 3) {
					tres += 3;
				}
			}
			three = 1;
			scr.three = tres;
		}
		if (choice == 4) {
			int quatro = 0;
			for (int i = 0;i < 5;i++) {
				if (dice[i] == 4) {
					quatro += 4;
				}
			}
			four = 1;
			scr.four = quatro;
		}
		if (choice == 5) {
			int cinco = 0;
			for (int i = 0;i < 5;i++) {
				if (dice[i] == 5) {
					cinco += 5;
				}
			}
			five = 1;
			scr.five = cinco;
		}
		if (choice == 6) {
			int seis = 0;
			for (int i = 0;i < 5;i++) {
				if (dice[i] == 6) {
					seis += 6;
				}
			}
			six = 1;
			scr.six = seis;
		}
		if (choice == 7) {
			int full = 0;
			if (((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[3] == dice[4]) && (dice[2] != dice[3])) ||
				((dice[0] == dice[1]) && (dice[2] == dice[3]) && (dice[3] == dice[4]) && (dice[1] != dice[2]))) {
				full = 25;
			}
			Full = 1;
			scr.FullHouse = full;
		}
		if (choice == 8) {
			int tofkind = 0;
			if (((dice[0] == dice[1]) && (dice[1] == dice[2])) ||
				((dice[2] == dice[3]) && (dice[3] == dice[4]))) {

				for (int i = 0;i < 5;i++) {
					tofkind += dice[i];
				}
			}
			Three = 1;
			scr.ThreeofKind = tofkind;
		}
		if (choice == 9) {
			int fofkind = 0;
			if (((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[2] == dice[3])) ||
				((dice[1] == dice[2]) && (dice[2] == dice[3]) && (dice[3] == dice[4]))) {

				for (int i = 0;i < 5;i++) {
					fofkind += dice[i];
				}
			}
			Four = 1;
			scr.FourofKind = fofkind;
		}
		if (choice == 10) {
			int small = 0;
			for (int i = 0; i < 4;i++) {
				int temp = 0;
				if (dice[i] == dice[i + 1]) {
					temp = dice[i];
					for (int j = i; j < 4; j++) {
						dice[j] = dice[j + 1];
					}
					dice[4] = temp;
				}
			}
			if (((dice[0] == 1) && (dice[1] == 2) && (dice[2] == 3) && (dice[3] == 4)) ||
				((dice[0] == 2) && (dice[1] == 3) && (dice[2] == 4) && (dice[3] == 5)) ||
				((dice[0] == 3) && (dice[1] == 4) && (dice[2] == 5) && (dice[3] == 6)) ||
				((dice[1] == 1) && (dice[2] == 2) && (dice[3] == 3) && (dice[4] == 4)) ||
				((dice[1] == 2) && (dice[2] == 3) && (dice[3] == 4) && (dice[4] == 5)) ||
				((dice[1] == 3) && (dice[2] == 4) && (dice[3] == 5) && (dice[4] == 6))) {
				small = 30;
			}
			Small = 1;
			scr.SmallStraight = small;
		}
		if (choice == 11) {
			int large = 0;
			if (((dice[0] == 1) && (dice[1] == 2) && (dice[2] == 3) && (dice[3] == 4) && (dice[4] == 5)) ||
				((dice[0] == 2) && (dice[1] == 3) && (dice[2] == 4) && (dice[3] == 5) && (dice[4] == 6))) {
				large = 40;
			}
			Large = 1;
			scr.LargeStraight = large;
		}
		if (choice == 12) {
			int yah = 0;
			if ((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[2] == dice[3])
				&& (dice[3] == dice[4]) && (dice[4] == dice[5])) {
				yah = 50;
			}
			Yahtzee = 1;
			scr.Yahtzee = yah;
		}
		if (choice == 13) {
			int chance = 0;
			for (int i = 0;i < 5;i++) {
				chance += dice[i];
			}
			Chance = 1;
			scr.Chance = chance;
		}
		if (choice == 14) {
			int yah = 0;
			if ((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[2] == dice[3])
				&& (dice[3] == dice[4]) && (dice[4] == dice[5])) {
				yah = 50;
			}
			scr.Yahtzee2 = yah;
		}
		if (choice == 15) {
			int yah = 0;
			if ((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[2] == dice[3])
				&& (dice[3] == dice[4]) && (dice[4] == dice[5])) {
				yah = 50;
			}
			scr.Yahtzee3 = yah;
		}
	}
	bonush = scr.one + scr.two + scr.three + scr.four + scr.five + scr.six;
	if (bonush > 63) {
		bonus = 35;
	}
	finalscore = scr.one + scr.two + scr.three + scr.four + scr.five + scr.six + bonus + scr.ThreeofKind + scr.FourofKind
		+ scr.SmallStraight + scr.LargeStraight + scr.Yahtzee + scr.Chance + scr.Yahtzee2 + scr.Yahtzee3 + scr.FullHouse;
	printf("Your final scores are:\nOnes: %d\nTwos: %d\nThrees: %d\nFours: %d\nFives: %d\nSixes: %d\n", scr.one, scr.two, scr.three, scr.four, scr.five, scr.six);
	printf("Bonus: %d\nFull House: %d\nThree of a Kind: %d\nFour of a Kind: %d\n", bonus, scr.FullHouse, scr.ThreeofKind, scr.FourofKind);
	printf("Small Straight: %d\nLarge Straight: %d\nYahtzee: %d\n", scr.SmallStraight, scr.LargeStraight, scr.Yahtzee);
	printf("Chance: %d\nYahtzee 2: %d\nYahtzee 3: %d\n\nFinal Score is: %d", scr.Chance, scr.Yahtzee2, scr.Yahtzee3, finalscore);
}

