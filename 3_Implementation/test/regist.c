#include "unity.h"
#include <regist.h>

/* Modify these two lines according to the project */
#include <regist.h>
#define PROJECT_NAME    "Store Management System"

/* Prototypes for all the test functions */
void test_billing(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_billing);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_billing(void) {
  TEST_ASSERT_EQUAL(1, open(quan.dat));
  TEST_ASSERT_EQUAL(2, open(price.dat));
  TEST_ASSERT_EQUAL(3, open(Invoice.dat));
 
    /* Dummy fail*/
  // TEST_ASSERT_EQUAL(0, file does not exist);
  
}
