#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string character
 * Return: the second half of the string
 */
void puts_half(char *str) {
  int length = strlen(str);  // Get the length of the string
  int half = length / 2;  // Calculate the half of the length

  // Check if the length of the string is odd
  if (length % 2 != 0) {
    half = (length - 1) / 2;  // Adjust the half value for odd length strings
  }

  // Print the second half of the string
  for (int i = half; i < length; i++) {
    putchar(str[i]);
  }

  putchar('\n');  // Print a new line
}
