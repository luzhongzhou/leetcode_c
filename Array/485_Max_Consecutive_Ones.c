int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i;
    int cnt = 0;
    int sum = 0;
    
	for(i = 0; i < numsSize; i++){
        if(nums[i]){
            cnt++;
	    	if(cnt > sum)  //
                sum = cnt;
        }else{
            cnt = 0;
        }        
    }
    return sum;
}
