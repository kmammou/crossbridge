/* File : example.c */

int do_op(int a, int b, int (*op)(int,int)) {
  return (*op)(a,b);
}

int add(int a, int b) {
  //__asm__ volatile("throw('what: ' + new Error().getStackTrace());");
  return a+b;
}

int sub(int a, int b) {
  return a-b;
}

int mul(int a, int b) {
  return a*b;
}

int (*funcvar)(int,int) = add;