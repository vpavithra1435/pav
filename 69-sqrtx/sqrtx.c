int mySqrt(int x) {
    if (x == 0) return 0;

    int low = 1, high = x, mid, res;
    
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (mid == x / mid) {
            return mid;
        } else if (mid < x / mid) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return res;
}