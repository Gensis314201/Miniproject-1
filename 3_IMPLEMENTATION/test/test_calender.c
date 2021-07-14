



/**
 * @file Calender.c
 * @author Sairaj (sairajlp99@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "Head.h"
void setUp()
{
}
void tearDown()
{
}

void test_check_leapyear(void)
{
    TEST_ASSERT_EQUAL(1,leapyear(2011));
    TEST_ASSERT_EQUAL(1,leapyear(1900));
    TEST_ASSERT_EQUAL(1,leapyear(2000));
  
    
}




int main(void)
{

  UNITY_BEGIN();
  RUN_TEST(test_check_leapyear);
 
  return UNITY_END();

}
