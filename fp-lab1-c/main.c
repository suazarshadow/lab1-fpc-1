#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY_CAPACITY 100
#define MAX_STRING_LENGHT 100

struct StringArray {
  char array[MAX_ARRAY_CAPACITY][MAX_STRING_LENGHT];
  int stringsInList;
};

int main(void) {
  struct StringArray array;
  array.stringsInList = 10;
  strcpy(array.array[0], "fagskduaskd");
  strcpy(array.array[1], "sai3uskaul3");
  strcpy(array.array[2], "132wesas3a3");
  strcpy(array.array[3], "32u12ku3hsaj3");
  strcpy(array.array[4], "daus3i8yaskuh3");
  strcpy(array.array[5], "asjdayus3yk");
  strcpy(array.array[6], "q2l3iusah3lk");
  strcpy(array.array[7], "123iasku3hkjh3");
  strcpy(array.array[8], "32u12ku3hsaj3");
  strcpy(array.array[9], "31i2hasyu3ky");

  char searchString[MAX_ARRAY_CAPACITY];

  strcpy(searchString, "32u12ku3hsaj3");
  for (int i = 0; i < array.stringsInList; i++) {
    printf("%s \n", array.array[i]);
  }
  printf("-----------------------\n");

  for (int i = 0; i < array.stringsInList; i++) {
    if (!(strcmp(array.array[i], searchString))) {
      for (int j = i; j < array.stringsInList; j++) {
        strcpy(array.array[j], array.array[j + 1]);
      }
      array.stringsInList = array.stringsInList - 1;
      break;
    }
  }
  for (int i = 0; i < array.stringsInList; i++) {
    printf("%s \n", array.array[i]);
  }
  return 0;
}