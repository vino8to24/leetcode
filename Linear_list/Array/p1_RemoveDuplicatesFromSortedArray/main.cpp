#include <iostream>
#include "solution1.h"
#include "solution2.h"
#include "solution3.h"

using std::cout;
using std::endl;

// 时间复杂度O(n), 空间复杂度O(1)
int Solution1::removeDuplicates(vector<int> &nums){
	if(nums.empty())
		return 0;
	int index = 0;
	for(int i=1; i<nums.size(); i++){
		if(nums[index] != nums[i])
			nums[++index] = nums[i];
	}
	return index+1;
}
// 使用STL，时间复杂度O(n), 空间复杂度O(1)
int Solution2::removeDuplicates(vector<int> &nums){
	return distance(nums.begin(), unique(nums.begin(), nums.end()));
}

int main(){
	int arr[10] = {1, 2, 2, 3, 5, 7, 7, 7, 8, 10};
	vector<int> vec1(&arr[0], &arr[10]);
	vector<int> vec2(vec1);
	int res1 = 0;
	int res2 = 0;
	
	Solution1 s1;
	Solution2 s2;
	res1 = s1.removeDuplicates(vec1);
	res2 = s2.removeDuplicates(vec2);
	cout << res1 << " " << res2 << endl;
	return 0;
}
