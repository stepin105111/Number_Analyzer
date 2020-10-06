#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


#include <numbers.h>
#define PROJECT_NAME    "Number_Analyzer"


void test_prime(void);
void test_armstrong(void);
void test_even_odd(void);
void test_palindrome(void);
void test_power(void);


int main() {
  
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);

  
  
 
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "armstrong", test_armstrong);
  CU_add_test(suite, "even_odd", test_even_odd);
  CU_add_test(suite, "palindrome", test_palindrome);
  CU_add_test(suite, "power", test_power);
  


  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  
  CU_basic_run_tests();
  
  
  CU_cleanup_registry();

  return 0;
}

 
void test_prime(void) {
  CU_ASSERT(1 == prime(1));
  
  
  CU_ASSERT(1 == prime(15));
}

void test_armstrong(void) {
  CU_ASSERT(1 == armstrong(153));
  
  /* Dummy fail*/
  CU_ASSERT(1 == armstrong(15));
}

void test_even_odd(void) {
  CU_ASSERT(1 == even_odd(8));
  
  /* Dummy fail*/
  CU_ASSERT(1 == even_odd(5));
}

void test_palindrome(void) {
  CU_ASSERT(1 == palindrome(1551));
  
  /* Dummy fail*/
  CU_ASSERT(1 == palindrome(20));
}

void test_power(void) {
  CU_ASSERT(1 == power(8));
  
  /* Dummy fail*/
  CU_ASSERT(1 == power(10));
}

