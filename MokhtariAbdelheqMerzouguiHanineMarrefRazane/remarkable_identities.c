#include "operations.h"

int first_iden(int a,int b){
 return addition(addition(square(a),square(b)),2*multiplication(a,b));
}
int second_iden(int a,int b){
 return substraction(addition(square(a),square(b)),2*multiplication(a,b));
}
int third_iden(int a,int b){
 return substraction(square(a),square(b));
}
