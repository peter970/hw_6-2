#include<stdio.h>
#include<stdlib.h>
void TurnBack()
{
	char sentence;
	scanf_s("%c", &sentence);
	if (sentence != '\n')
	{
		TurnBack();
		printf("%c", sentence);
	}
}
int main()
{
	printf("Enter a sentence :");
	TurnBack();
	printf("\n");
	system("pause");
	return 0;

}