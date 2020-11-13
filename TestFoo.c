#include "../src/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include "./../get_opt.h"
#include "./../array.h"
#include "./../sort.h"
#include "./../mainCheck.h"

void test_selectionRandom(void)
{
  int tam = 4;
  int array[5] = {2,3,2,0,4};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "selection");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(0,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_selectionDescending(void)
{
  int tam = 4;
  int array[5] = {5,4,3,2,1};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "selection");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "descending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(1,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_selectionAlmost(void)
{
  int tam = 4;
  int array[5] = {0,1,2,4,3};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "selection");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "almost");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_selectionAscending(void){
  int tam = 4;
  int array[5] = {0,1,2,3,4};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "selection");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "ascending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_insertionRandom(void)
{
  int tam = 4;
  int array[10] = {9,2,7,3,9,5,6,4,7,6};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "insertion");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(2,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_insertionDescending(void)
{
  int tam = 4;
  int array[10] = {10,9,8,7,6,5,4,3,2,1};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "insertion");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "descending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(1,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_insertionAlmost(void)
{
  int tam = 4;
  int array[10] = {0,1,2,3,4,5,7,8,9,6};
  int num = 9;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(10 * sizeof(char));
  sprintf(ptr[0], "insertion");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "almost");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(9,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_insertionAscending(void){
  int tam = 4;
  int array[5] =  {0,1,2,3,4};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[0], "insertion");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "ascending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_shellRandom(void)
{
  int tam = 4;
  int array[10] = {6,1,4,7,9,9,7,2,9,8};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "shell");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(1,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_shellDescending(void)
{
  int tam = 4;
  int array[10] = {10,9,8,7,6,5,4,3,2,1};
  int num = 9;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "shell");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "descending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(10,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_shellAlmost(void)
{
  int tam = 4;
  int array[10] = {1,0,2,4,3,5,7,6,8,9};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "shell");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "almost");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(0,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_shellAscending(void){
  int tam = 4;
  int array[5] =  {0,1,2,3,4};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "shell");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "ascending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_quickRandom(void)
{
  int tam = 4;
  int array[5] = {4,4,0,2,2};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "quick");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(0,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_quickDescending(void)
{
  int tam = 4;
  int array[10] = {10,9,8,7,6,5,4,3,2,1};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "quick");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "descending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(1,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_quickAlmost(void)
{
  int tam = 4;
  int array[5] = {1,2,4,3,5};
  int num = 3;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "quick");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "almost");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_quickAscending(void){
  int tam = 4;
  int array[5] =  {0,1,2,3,4};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "quick");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "ascending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_heapRandom(void)
{
  int tam = 4;
  int array[5] = {0,2,6,4,3};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(5 * sizeof(char));
  sprintf(ptr[0], "heap");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(6,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_heapDescending(void)
{
  int tam = 4;
  int array[10] = {10,9,8,7,6,5,4,3,2,1};
  int num = 0;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(5 * sizeof(char));
  sprintf(ptr[0], "heap");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "10");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "descending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(1,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_heapAlmost(void)
{
  int tam = 4;
  int array[8] = {0,1,2,4,3,5,7,6};
  int num = 7;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(5 * sizeof(char));
  sprintf(ptr[0], "heap");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "8");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(7,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_heapAscending(void){
  int tam = 4;
  int array[5] =  {0,1,2,4,3};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(5 * sizeof(char));
  sprintf(ptr[0], "heap");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "ascending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_mergeRandom(void)
{
  int tam = 4;
  int array[8] = {0,3,2,8,5,5,7,6};
  int num = 7;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "merge");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "8");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(8,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_mergeDescending(void)
{
  int tam = 4;
  int array[8] = {8,7,6,5,4,3,2,1};
  int num = 7;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "merge");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "8");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(8,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_mergeAlmost(void)
{
  int tam = 4;
  int array[8] = {0,1,2,4,3,5,7,6};
  int num = 7;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "merge");
  ptr[1] = (char *)malloc(2 * sizeof(char));
  sprintf(ptr[1], "8");
  ptr[2] = (char *)malloc(7 * sizeof(char));
  sprintf(ptr[2], "random");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(7,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}

void test_mergeAscending(void){
  int tam = 4;
  int array[5] = {0,1,2,3,4};
  int num = 4;
  char **ptr = (char **)malloc(tam * sizeof(char*));

  ptr[0] = (char *)malloc(6 * sizeof(char));
  sprintf(ptr[0], "merge");
  ptr[1] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[1], "5");
  ptr[2] = (char *)malloc(11 * sizeof(char));
  sprintf(ptr[2], "ascending");
  ptr[3] = (char *)malloc(3 * sizeof(char));
  sprintf(ptr[3], "-P");
    
  TEST_ASSERT_EQUAL_INT(4,maincheck(tam,ptr,array,num));

  free(ptr[0]);
  free(ptr[1]);
  free(ptr[2]);
  free(ptr[3]);
  free(ptr);
}



