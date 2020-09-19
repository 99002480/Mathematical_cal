#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


#include <main_proj.h>
#define PROJECT_NAME    "Mathematical Calculator"

/* Prototypes for all the test functions */
void sel_func (int s);
void add ();
void sub ();
void mul ();
void div ();
void sqr ();
void prime_factorization ();
void factorial ();

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "sub", test_sub);
  CU_add_test(suite, "mul", test_mul);
  CU_add_test(suite, "div", test_div);
  CU_add_test(suite, "sqr", test_sqr);
  CU_add_test(suite, "prime_factorization", test_prime_factorization);
  CU_add_test(suite, "factorial", test_factorial);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_sub(void) {
  CU_ASSERT(-3 == sub(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == sub(1000, 900));
}

void test_mul(void) {
  CU_ASSERT(0 == mul(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == mul(2, 5));
}

void test_div(void) {
  CU_ASSERT(5 == div(10, 2));
  
 
  CU_ASSERT(3 == div(2, 2));
}
void test_sqr(void) {
  CU_ASSERT(4 == sqr(2, 2));
  
 
  CU_ASSERT(3 == sqr(2, 2));
}void test_prime_factorization(void) {
  CU_ASSERT(2*2*5*5 == prime_factorization(100));
  
 
  CU_ASSERT(3 == prime_factorization(10));
}void test_factorial(void) {
  CU_ASSERT(120 == factorial(5));
  
 
  CU_ASSERT(3 == factorial(2));
}
