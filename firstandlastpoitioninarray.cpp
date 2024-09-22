int firstoccurence(vector<int>& arr, int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Continue searching in the left half for first occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastoccurence(vector<int>& arr, int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1; // Continue searching in the right half for last occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = firstoccurence(arr, n, k);
    p.second = lastoccurence(arr, n, k);
    return p;
}