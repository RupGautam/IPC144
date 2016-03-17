

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void SeedRandom();
float GetRandom(float low, float high);
void clear();
int validate(int low, int high);

int main()
{
	int input;
			do{

			SeedRandom();
			float randomNum;

						randomNum = GetRandom(0.15 , 0.50);
			float strenghtRatio = randomNum;

			randomNum = GetRandom(0.15 , 0.50);
			float speedRatio = randomNum;

			randomNum = GetRandom(0.15 , 0.50);
			float defenceRatio = randomNum;

			randomNum = GetRandom(0.15 , 0.50);
			float intelligenceRatio = randomNum;

			randomNum = GetRandom(0.5,2.0);
												float HPratio = randomNum;

			randomNum = GetRandom(3,20);
						float level = randomNum;

			strenghtRatio = truncf(strenghtRatio*level*level);
						speedRatio = truncf(speedRatio*level*level);
			defenceRatio = truncf(defenceRatio*level*level);
												intelligenceRatio = truncf(intelligenceRatio*level*level);
			HPratio = truncf(HPratio*level);
			level = truncf(level);

			printf("Level        - %d\n" , (int)level);
						printf("HP           - %d\n" , (int)HPratio);
						printf("Strenght     - %d\n" , (int)strenghtRatio);
						printf("Speed        - %d\n" , (int)speedRatio);
			printf("Defence      - %d\n" , (int)defenceRatio);
			printf("Intelligence - %d\n" , (int)intelligenceRatio);
			printf("Generate Another?   ");
			input = validate(1,2);
		}while(input != 2);


}
void SeedRandom()
{

					srand(time(NULL));
}

float GetRandom(float low, float high)
{

					float x = low + ((float) rand() / RAND_MAX * (high - low));


						return x;

}


void clear()
{
						while ( getchar() != '\n' );
}

int validate(int low, int high)
{
		int number, goodResult;
			do
				{
					scanf("%d", &number);

					if (number >= low && number <= high)

						{
							goodResult = number;
						}

					else
						{
							clear();
							printf("Invalid input, try again:  ");
						}
				}
				while(goodResult != number);
				return number;
}

