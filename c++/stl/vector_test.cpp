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
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> nums;
	int elem;

	while (cin >> elem) {
		nums.push_back(elem);
	}

	sort(nums.begin(), nums.end());


	cout << "output using indexe:" << endl;
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}


	cout << "output using iterator:" << endl;
	for (vector<int>::iterator it = nums.begin(); it < nums.end(); it++) {
		cout << *it << endl;
	}

	cout << "output using reverse iterator:" << endl;
	for (vector<int>::reverse_iterator rit = nums.rbegin();
	     rit < nums.rend(); rit++) {
		cout << *rit << endl;
	}

	return 0;
}

