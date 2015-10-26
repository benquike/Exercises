/*******************************************************
 * Copyright (C) 2015 Hui Peng <peng124@purdue.edu>
 *
 * This file is part of {project}.
 *
 * {project} can not be copied and/or distributed without
 * the express permission of Hui Peng
 *******************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> nums;

	copy(istream_iterator<int>(cin), istream_iterator<int>(),
	     back_insert_iterator< vector<int> >(nums));

	sort(nums.begin(), nums.end());

	copy(nums.begin(), nums.end(), ostream_iterator<int>(cout, "\n"));

	return 0;
}

