#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <assert.h>
#include "gtest/gtest.h"

extern "C" {
#include "hw1.h"
}

void expect_no_asan_errors(int status);
int run_using_asan(const char *test_name);
void assert_arrays_equal(char exp_array[MAX_ROWS][MAX_COLS], char act_array[MAX_ROWS][MAX_COLS]);