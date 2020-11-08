/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  UNITY_EXEC_TIME_START(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UNITY_EXEC_TIME_STOP(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#define UNITY_INCLUDE_SETUP_STUBS
#include "../../src/unity.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include "../../mainCheck.h"

/*=======External Functions This Runner Calls=====*/
extern void test_selectionRandom(void);
extern void test_selectionDescending(void);
extern void test_selectionAlmost(void);
extern void test_insertionRandom(void);
extern void test_insertionDescending(void);
extern void test_insertionAlmost(void);
extern void test_shellRandom(void);
extern void test_shellDescending(void);
extern void test_shellAlmost(void);
extern void test_quickRandom(void);
extern void test_quickDescending(void);
extern void test_quickAlmost(void);
extern void test_heapRandom(void);
extern void test_heapDescending(void);
extern void test_heapAlmost(void);
extern void test_mergeRandom(void);
extern void test_mergeDescending(void);
extern void test_mergeAlmost(void);

/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test/TestFoo.c");
  RUN_TEST(test_selectionRandom, 0);
  RUN_TEST(test_selectionDescending,1);
  RUN_TEST(test_selectionAlmost,4);
  RUN_TEST(test_insertionRandom,2);
  RUN_TEST(test_insertionDescending,1);
  RUN_TEST(test_insertionAlmost,9);
  RUN_TEST(test_shellRandom,1);
  RUN_TEST(test_shellDescending,10);
  RUN_TEST(test_shellAlmost,0);
  RUN_TEST(test_quickRandom,0);
  RUN_TEST(test_quickDescending,1);
  RUN_TEST(test_quickAlmost,4);
  RUN_TEST(test_heapRandom,4);
  RUN_TEST(test_heapDescending,1);
  RUN_TEST(test_heapAlmost,7);
  RUN_TEST(test_mergeRandom,8);
  RUN_TEST(test_mergeDescending,8);
  RUN_TEST(test_mergeAlmost,7);
  
  return suite_teardown(UnityEnd());
}
