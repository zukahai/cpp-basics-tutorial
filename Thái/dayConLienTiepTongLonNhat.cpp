/*

7
1 -3 2 4 6 -3 2

dp[k]: TỔNG dãy con có tổng liên tiếp lớn nhất kết thúc tại vị trí k

dp[0] = a[0]

i > 1
Nếu nối với dãy trước: dp[i] = dp[i - 1] + a[i]
Nếu  không nối với dãy trước: dp[i] = a[i]




*/