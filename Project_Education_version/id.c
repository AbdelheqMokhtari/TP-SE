/*
this file is for education purposes 
if someone send the file like that please don't accept the submission 
*/

#include "operation.h"

int first_id(int a,int b){
  // (a+b)² = ((a²) + (b²)) + 2(ab) 
  int result;
  result = addition(addition(square(a),square(b)),2*mult(a,b));// a*a + b*b + 2 *a* b 
  return result; 
}
int second_id(int a,int b){
  // (a-b)² = ((a²) + (b²)) - 2(ab) 
  return substraction(addition(square(a),square(b)),2*mult(a,b));
}
int third_id(int a,int b){
  // (a+b)(a-b) = a² - b²
  return substraction(square(a),square(b));
}

/*
this file is for education purposes 
if someone send the file like that please don't accept the submission 
*/
