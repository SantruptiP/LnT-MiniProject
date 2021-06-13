#include "unity.h"
#include <tevis.h>

#define PROJECT_NAME    "TEVIS"
/* Prototypes for all the test functions */
void test_addTrkRec(void);
void test_viewData(void);
void test_SearchData(void);

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
  RUN_TEST(test_addTrkRec);
  RUN_TEST(test_viewData);
  RUN_TEST(test_SearchData);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addTrkRec(void) {
  T[0].addTrkRec(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime);
  TEST_ASSERT_NOT_NULL(truckID);
  TEST_ASSERT_NOT_NULL(truckModel);
  TEST_ASSERT_NOT_NULL(truckRegNo);
  TEST_ASSERT_NOT_NULL(carryingCargo);
  TEST_ASSERT_NOT_NULL(drivenBy);
  TEST_ASSERT_NOT_NULL(arrivalTime);
}

void test_viewData(void) {
  T[0].viewData(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime);
  TEST_ASSERT_NOT_NULL(truckID);
  TEST_ASSERT_NOT_NULL(truckModel);
  TEST_ASSERT_NOT_NULL(truckRegNo);
  TEST_ASSERT_NOT_NULL(carryingCargo);
  TEST_ASSERT_NOT_NULL(drivenBy);
  TEST_ASSERT_NOT_NULL(arrivalTime);
}

void test_SearchData(void) {
  T[0].SearchData(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime);
  TEST_ASSERT_NOT_NULL(Tid);
  
}
