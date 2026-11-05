class Solution {

    public boolean isPossibleSoln(int[] bloomDay, int m, int k, int mid) {

        int consecutiveFlowers = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.length; i++) {

            if (bloomDay[i] <= mid) {
                consecutiveFlowers++;

                if (consecutiveFlowers == k) {
                    bouquets++;
                    consecutiveFlowers = 0;
                }

            } else {
                consecutiveFlowers = 0;
            }

            if (bouquets >= m) {
                return true;
            }
        }

        return false;
    }

    public int minDays(int[] bloomDay, int m, int k) {

        if ((long) m * k > bloomDay.length) {
            return -1;
        }

        int start = bloomDay[0];
        int end = bloomDay[0];

        for (int i = 0; i < bloomDay.length; i++) {
            start = Math.min(start, bloomDay[i]);
            end = Math.max(end, bloomDay[i]);
        }

        int ans = end;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (isPossibleSoln(bloomDay, m, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
}