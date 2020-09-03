// author Jocelyn Fafard jqf5530@psu.edu
// collaborator Nicholas Cole nyc5096@psu.edu
// collaborator Haorong Xu hxx5086@psu.edu
// collaborator Jerry Diaz jqd5879@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  double temp = atof(celsius);
  double fahrenheit = ((temp * 1.8) +32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, fahrenheit);

  return 0;
}