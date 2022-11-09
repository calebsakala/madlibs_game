#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numOfDays;
  char lengthOfTime[10], verb1[20], groomName[20], adjective1[20], brideName[20],
      activity[20], verb2[20], timeofDay[20], verb3[20], noun1[20],
      nameOfRestaurant[20], typeOfFood[20], typeOfDrink[20], noun2[20], verb4[20],
      feeling[20], pastTenseVerb[20], termOfEndearment[20],
      pastTenseVerb2[20], verb5[20], pastTenseVerb3[20], verb6[20], schoolSubject[20];

  printf("Enter a number\n> ");
  scanf("%d", &numOfDays);

  printf("Type one from the below:\nyears | months | weeks | days | minutes | seconds\n> ");
  scanf("%s", lengthOfTime);

  printf("Type in a verb. i.e 'run'.\n> ");
  scanf("%s", verb1);

  printf("Type in a (male) name.\n> ");
  scanf("%s", groomName);

  printf("Type in an adjective (describing word). i.e 'ugly'.\n> ");
  scanf("%s", adjective1);

  printf("Type in a (female) name.\n> ");
  scanf("%s", brideName);

  printf("Type in an activity i.e 'football' or 'music'.\n> ");
  scanf("%s", activity);

  printf("Type in a verb. i.e 'smack'.\n> ");
  scanf("%s", verb2);

  printf("Type in a time of day. i.e 'afternoon'.\n> ");
  scanf("%s", timeofDay);

  printf("Type in a verb. i.e 'eat'.\n> ");
  scanf("%s", verb3);

  printf("Type in a noun. i.e 'bottle'\n> ");
  scanf("%s", noun1);

  printf("Type in an (Italian) name.\n> ");
  scanf("%s", nameOfRestaurant);

  printf("Type in a type of food.\n> ");
  scanf("%s", typeOfFood);

  printf("Type in a type of drink.\n> ");
  scanf("%s", typeOfDrink);

  printf("Type in a noun. i.e 'computer'.\n> ");
  scanf("%s", noun2);

  printf("Type in a verb. i.e 'shoot'.\n> ");
  scanf("%s", verb4);

  printf("Type in a feeling. i.e 'sad'\n> ");
  scanf("%s", feeling);

  printf("Type in a past tense verb. i.e 'stole, checked, asked'\n> ");
  scanf("%s", pastTenseVerb);

  printf("Type in a term of endearment. i.e 'sweetheart, honey'.\n> ");
  scanf("%s", termOfEndearment);

  printf("Type in a past tense verb. i.e 'assaulted, sang, reported'\n> ");
  scanf("%s", pastTenseVerb2);

  printf("Type in a verb. i.e 'listen'.\n> ");
  scanf("%s", verb5);

  printf("Type in a past tense verb. i.e 'gave, told, popped'\n> ");
  scanf("%s", pastTenseVerb3);

  printf("Type in a verb. i.e 'poison'.\n> ");
  scanf("%s", verb6);

  printf("Type in a school subject. i.e 'mathematics'.\n> ");
  scanf("%s", schoolSubject);

  printf("One day after %d %s of %sing, %s decided he couldn't live without his %s %s any longer.\n", numOfDays, lengthOfTime, verb1, groomName, adjective1, brideName);
  printf("So he decided to ask for her to do %s with him. He wanted to %s her and make her %s very special.\n", activity, verb2, timeofDay);
  printf("He planned to %s the %s in her dessert at dinner. So he took her to their favourite restaurant: %s!\n", verb3, noun1, nameOfRestaurant);
  printf("They ate %s and drank %s. When the waiter asked if they wanted a %s, %s said,\n", typeOfFood, typeOfDrink, noun2, brideName);
  printf("'No, I couldn't possibly %s another bite.'\n%s was feeling %s. What would he do now, he %s?\n", verb4, groomName, feeling, pastTenseVerb);
  printf("He said,\n");
  printf("'Oh, %s, why don't we split something?', and so he asked for some %s.\n", termOfEndearment, typeOfFood);
  printf("When it finally %s, and they started %sing it, the ring was %s and %s asked %s to %s him!\n", pastTenseVerb2, verb5, pastTenseVerb3, groomName, brideName, verb6);
  printf("And the rest, as they say, is %s.", schoolSubject);

  return 0;
}