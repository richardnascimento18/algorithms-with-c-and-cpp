/*
 * Lesson 01 — Pointers and Double Pointers
 *
 * OBJECTIVES:
 * 1. Understand pointer dereferencing.
 * 2. Modify a variable through a pointer.
 * 3. Change an existing pointer using a double pointer.
 * 4. Understand pass-by-value in C.
 *
 * EXERCISE:
 *
 * Implement the following functions:
 *
 * 1. set_value():
 *    Change the integer pointed to by p.
 *
 * 2. redirect():
 *    Change the caller's pointer so that it points
 *    to the same object as target.
 *
 * RULES:
 * - Do not modify main().
 * - Do not use global variables.
 * - Assume all pointers passed are valid.
 * - Complete only the TODO sections.
 */

#include <assert.h>
#include <stdio.h>

/*
 * TODO 1:
 * Modify the integer pointed to by p.
 */
void set_value(int *p, int new_value) { *p = new_value; }

/*
 * TODO 2:
 * Change the caller's pointer to point to target.
 */
void redirect(int **p, int *target) { *p = target; }

int main(void) {
  int x = 10;
  int y = 100;

  int *ptr = &x;

  // Test 1: Change x through ptr
  set_value(ptr, 50);

  assert(x == 50);

  // Test 2: Make ptr point to y
  redirect(&ptr, &y);

  assert(ptr == &y);
  assert(*ptr == 100);

  // Test 3: Verify x remains unchanged
  assert(x == 50);

  printf("All C tests passed!\n");

  return 0;
}
