#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int > nums({-1,0,1,2,-1,-4});
	int min;
        for (int i = 0; i < nums.size(); i++) {
            min=nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (min > nums[j]) {
                    int temp=nums[j];
                    nums[j]=nums[i];
					nums[i]=temp;
                }
            }
        }
		for(int i=0;i<nums.size();i++){
			cout<<nums[i]<<" ";
		}
	return 0;
}