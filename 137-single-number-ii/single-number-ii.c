int singleNumber(int* nums, int numsSize) {
    int result = 0, repeat = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i] & ~repeat;
        repeat ^= nums[i] & ~result;
    }
    return result;
}
