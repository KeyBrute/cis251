// Fill in:
// 		useUninitializedMemory(),
//		returnAddressOfLocalVariable(), and
//		useReturnedAddressOfLocalVar().
// With your partner, use valgrind and gdb to find and fix the issues here.
// Document your process.
#include <stdio.h>
#include <stdlib.h>

const int Size = 10;

// Shown in class
void memoryLeak() {
  int *intArray = (int *)malloc(sizeof(int) * Size);
  // Initialize the array with values
  for (int i = 0; i < Size; i++) {
    intArray[i] = i * 2;
  }
  // Returning from function without freeing malloc space.
}

// Done as prep for the lab
void doubleFree() {
  int *ptr = (int *)malloc(sizeof(int));
  free(ptr);
   //free(ptr);

}


void useUninitializedMemory() {
  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  printf("%d\n", *ptr);
  free(ptr);
}


int *returnAddressOfLocalVariable() {
  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  return ptr;
}

// Additionally, in useReturnedAddressOfLocalVar(), 
// we need to make sure to free the dynamically allocated memory after using it to avoid a memory leak
void useReturnedAddressOfLocalVar() {
  int *ptr = returnAddressOfLocalVariable();
  printf("%d\n", *ptr);
  free(ptr);
}

int main() {
  printf("Starting valgrind test program. \n");
  memoryLeak();
  doubleFree();
  useUninitializedMemory();
   useReturnedAddressOfLocalVar();

  printf("Done.\n");
  return 0;
}
