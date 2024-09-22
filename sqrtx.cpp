long long int binarysearch(int n) {
    int s = 0, e = n;
    long long int mid, ans = -1;
    
    while (s <= e) {
        mid = s + (e - s) / 2;
        long long int sq = mid * mid;
        
        if (sq == n) {
            return mid;  // Perfect square
        }
        if (sq < n) {
            ans = mid;   // Store potential answer
            s = mid + 1; // Move right
        } else {
            e = mid - 1; // Move left
        }
    }
    
    return ans; // Floor of sqrt(n)
}

int floorSqrt(int n) {
    return binarysearch(n);
}
