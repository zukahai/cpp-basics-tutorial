7
3 10 4 6 -7 9 3

1  1 2 3 1  4 1


dp[k]: là độ dài dãy (Không liên tiếp) tăng dài nhất kết thúc tại vị trí k

dp[0] = 
i > 0:
    dp[i] = max(dp[j] + 1) 
    với 
        - j < i
        - a[j] < a[i]


t[k]: là chỉ số của phần tử trước a[k] trong dãy 

