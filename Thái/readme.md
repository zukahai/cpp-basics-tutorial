# Đổi tiền

Một ngân hàng có N mệnh giá tiền với số lượng tờ tiền là vô số.

Cho trước N mệnh giá tiền của ngân hàng. Hỏi có bao nhiêu cách đổi một số tiền X bằng các tờ tiền của ngân hàng.

**input**:
- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^5) và X (1 ≤ ai ≤ 10^3) là số mệnh giá tiền của ngân hàng.
- Dòng thứ hai chứa N số nguyên a1, a2, ..., aN (1 ≤ ai ≤ 10^3) là mệnh giá tiền của ngân hàng.

**output**:
- In ra số cách đổi tiền X bằng các tờ tiền của ngân hàng.

Ví dụ:

| input | output |
|-------|--------|
| 3 4   | 4      |
| 1 2 3 |        |

Giải thích: Có 4 cách đổi tiền 4 bằng các tờ tiền 1, 2, 3 là: 
- 1+1+1+1,
- 1+1+2,
- 1+3 
- 2+2.



| input | output |
|-------|--------|
| 4 7  | 7       |
| 1 2 5 7    |        |

Giải thích: Có 7 cách đổi tiền 7 bằng các tờ tiền 1, 2, 5, 7 là:
- 1+1+1+1+1+1+1,
- 1+1+1+1+1+2,
- 1+1+1+2+2,
- 1+2+2+2,
- 1+1+5,
- 2+5.
- 7


| input | output |
|-------|--------|
| 3 6 | 3     |
|  2 3 4 |        |

Giải thích: Có 3 cách đổi tiền 6 bằng các tờ tiền 2, 3, 4 là:

- 2+2+2,
- 2+4
- 3


| input | output |
|-------|--------|
| 4 4 | 5     |
|  1 2 3 4 |        |

Giải thích: Có 5 cách đổi tiền 4 bằng các tờ tiền 1, 2, 3, 4 là:

- 1+1+1+1,
- 1+1+2,
- 1+3,
- 2+2,
- 4


3 6
2 3 4

0: 1
1: 0
2: 1
3: 1
4: 2
5: 1
6: 3
7: 2

for i: 1 -> n
    for j: a[i] -> x
        f[j] += + f[j - a[i]]
