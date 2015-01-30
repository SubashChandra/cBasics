#include<stdio.h>

struct card{
	char *face;
	char *suit;
};

int main(void)
{
	struct card aCard;
	struct card *cardptr;

	aCard.face = "Ace";
	aCard.suit = "Spade";

	cardptr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n\n",aCard.face, " of ",aCard.suit,cardptr->face," of ",cardptr->suit,(*cardptr).face," of ",(*cardptr).suit);

	return 0;
}
