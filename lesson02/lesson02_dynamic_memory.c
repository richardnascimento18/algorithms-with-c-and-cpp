/*
 * Lesson 02 — Dynamic Memory Allocation in C
 *
 * OBJECTIVES:
 * 1. Allocate memory dynamically using malloc().
 * 2. Initialize dynamically allocated array elements.
 * 3. Return allocated storage through a pointer parameter.
 * 4. Understand who owns and releases the allocation.
 *
 * TASK:
 * Implement make_squares().
 *
 * Given count, allocate an array of count integers
 * containing the squares:
 *
 * [0, 1, 4, 9, 16, ...]
 *
 * REQUIREMENTS:
 * - Allocate using malloc().
 * - Initialize all array elements.
 * - On success, store the pointer in *out.
 * - Return 1 on success, 0 on allocation failure.
 * - Leave *out unchanged on failure.
 * - Assume count > 0 and the requested size fits.
 * - Do not modify main().
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int make_squares(size_t count, int **out) {
  // TODO 1: Allocate memory for count integers.
  int *numberArray = malloc(count * sizeof(*numberArray));

  // TODO 2: Check whether allocation succeeded.
  if (numberArray == NULL) {
    return 0;
  }

  // TODO 3: Fill the array with squares.
  for (size_t i = 0; i < count; i++) {
    numberArray[i] = (int)(i * i);
  }

  // TODO 4: Assign the allocation to *out.
  *out = numberArray;

  // TODO 5: Return success or failure.
  return 1;
}

int main(void) {
  int *numbers = NULL;

  int success = make_squares(5, &numbers);

  assert(success == 1);
  assert(numbers != NULL);

  assert(numbers[0] == 0);
  assert(numbers[1] == 1);
  assert(numbers[2] == 4);
  assert(numbers[3] == 9);
  assert(numbers[4] == 16);

  free(numbers);

  printf("C dynamic memory tests passed!\n");

  return 0;
}
