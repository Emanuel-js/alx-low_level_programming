#include <stdio.h> 
#include <unistd.h> 
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int write(int filedes, const char *buf, unsigned int nbyte); 
int main() 
{ 
  write(1, "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",100); 
  return 1; 
}
