#include"unity.h" 
#include"cal.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_add()
{
    int addition(int n1, int n2);
    TEST_ASSERT_EQUAL(100, addition(70, 30));
}

void test_sub()
{
    int subtraction(int n1, int n2);
    TEST_ASSERT_EQUAL(40, subtraction(70, 30));
}

int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}



