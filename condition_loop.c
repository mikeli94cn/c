#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char today[20];
  char mood[10];
  strcpy(today, "Wednesday");

  if (strcmp(today, "Monday") == 0) {
    printf("today is %s,mood is %s\n", today, "bad");
  } else {
    printf("today is %s,mood is %s\n", today, "happy");
  }

  if (strcmp(today, "Friday") == 0) {
    strcpy(mood, "happy");
  } else if (strcmp(today, "Monday") == 0) {
    strcpy(mood, "bad");
  } else {
    strcpy(mood, "normal");
  }
  printf("today is %s, mood is %s\n", today, mood);
}
