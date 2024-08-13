# Vòng lặp for

### Bài 1: In ra các số từ 1 đến 10

Viết chương trình in ra màn hình các số từ 1 đến 10.<br>
Mỗi số in ra một dòng.

**Đầu vào**

Không có.

**Đầu ra**

Các số từ 1 đến 10, mỗi số in ra một dòng.

| Đầu vào | Đầu ra |
| --- | --- |
| | 1<br>2<br>3<br>4<br>5<br>6<br>7<br>8<br>9<br>10 |


### Bài 2: In ra các số từ 10 đến 1

Viết chương trình in ra màn hình các số từ 10 đến 1.<br>

**Đầu vào**

Không có.

**Đầu ra**

Các số từ 10 đến 1, mỗi số in ra một dòng.

| Đầu vào | Đầu ra |
| --- | --- |
| | 10<br>9<br>8<br>7<br>6<br>5<br>4<br>3<br>2<br>1 |

### Bài 3: In ra các số từ 1 đến n

Viết chương trình in ra màn hình các số từ 1 đến n.<br>
Trong đó, n là số nguyên dương nhập từ bàn phím.

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 100).

**Đầu ra**

Các số từ 1 đến n, mỗi số in ra một dòng.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 1<br>2<br>3<br>4<br>5 |

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 7 | 1<br>2<br>3<br>4<br>5<br>6<br>7 |


### Bài 4: In ra các số từ n đến 1

Viết chương trình in ra màn hình các số từ n đến 1.<br>
Trong đó, n là số nguyên dương nhập từ bàn phím.

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 100).

**Đầu ra**

Các số từ n đến 1, mỗi số in ra một dòng.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 5<br>4<br>3<br>2<br>1 |

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 7 | 7<br>6<br>5<br>4<br>3<br>2<br>1 |

### Bài 5: Tính tổng các số từ 1 đến n

Viết chương trình tính tổng các số từ 1 đến n.<br>

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 1000).

**Đầu ra**

Tổng các số từ 1 đến n.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 15 |

Vì `1 + 2 + 3 + 4 + 5 = 15`.

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 10 | 55 |

Vì `1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55`.

## Gợi ý

Để giải bài toán này, bạn cần sử dụng vòng lặp for để duyệt qua các số từ 1 đến n.<br>
Trong mỗi lần duyệt, bạn cần cộng giá trị của biến `i` vào biến tổng.


### Bài 6: In ra các số chẵn trong khoảng từ 1 đến n

Viết chương trình in ra màn hình các số chẵn trong khoảng từ 1 đến n.<br>
Trong đó, n là số nguyên dương nhập từ bàn phím.

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 1000).

**Đầu ra**

Các số chẵn từ 1 đến n, mỗi số in ra một dòng.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 2<br>4 |

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 7 | 2<br>4<br>6 |

Cách 2: For từ 2 tới n, bước nhảy là 2.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
    }
}
```

### Bài 7: In ra các số lẻ trong khoảng từ 1 đến n

Viết chương trình in ra màn hình các số lẻ trong khoảng từ 1 đến n.<br>

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 1000).

**Đầu ra**

Các số lẻ từ 1 đến n, mỗi số in ra một dòng.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 1<br>3<br>5 |

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 7 | 1<br>3<br>5<br>7 |

### Bài 8: Các số chia hết cho 2 hoặc 3 trong khoảng từ 1 đến n

Viết chương trình in ra màn hình các số chia hết cho 2 hoặc 3 trong khoảng từ 1 đến n.<br>

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 1000).

**Đầu ra**

Các số chia hết cho 2 hoặc 3 từ 1 đến n, mỗi số in ra một dòng.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 2<br>3<br>4 |

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 10 | 2<br>3<br>4<br>6<br>8<br>9 |


### Bài 9: Tính tổng các số chia hết cho 3 trong khoảng từ 1 đến n

Viết chương trình tính tổng các số chia hết cho 3 trong khoảng từ 1 đến n.<br>

**Đầu vào**

Số nguyên dương n (1 ≤ n ≤ 1000).

**Đầu ra**

Tổng các số chia hết cho 3 từ 1 đến n.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| --- | --- |
| 10 | 18 |

Vì `3 + 6 + 9 = 18`.

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| --- | --- |
| 15 | 45 |

Vì `3 + 6 + 9 + 12 + 15 = 45`.

### Bài 10: Các ước của N

Nhập vào số nguyên dương N (1 ≤ N ≤ 1000).<br>
Hãy liệt kê tất cả các ước của N.

*Các ước của N là các số tự nhiên mà N chia hết*

**Đầu vào**

Số nguyên dương N (1 ≤ N ≤ 1000).

**Đầu ra**

Các ước của N, mỗi ước in ra một dòng.

**Ví dụ 1**

| Đầu vào | Đầu ra |
| --- | --- |
| 6 | 1<br>2<br>3<br>6 |

**Ví dụ 2**

| Đầu vào | Đầu ra |
| --- | --- |
| 10 | 1<br>2<br>5<br>10 |

**Ví dụ 3**

| Đầu vào | Đầu ra |
| --- | --- |
| 15 | 1<br>3<br>5<br>15 |


### Bài 11: Tính N giai thừa

Nhập vào số nguyên N (2 ≤ N ≤ 10).<br>

Tính N giai thừa.

Giai thừa của N được tính bằng công thức:

```
N! = 1 * 2 * 3 * ... * N
```

**Đầu vào**

Số nguyên N (2 ≤ N ≤ 10).

**Đầu ra**

In ra giai thừa của N. (Xem ví dụ để hiểu rõ hơn)

**Ví dụ 1**

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | 1 * 2 * 3 * 4 * 5 = 120 |

**Ví dụ 2**

| Đầu vào | Đầu ra |
| --- | --- |
| 8 | 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 = 40320 |

**Ví dụ 3**

| Đầu vào | Đầu ra |
| --- | --- |
| 2 | 1 * 2 = 2 |


### Bài 12: Tổng chu vi và diện tích

Nhập vào số nguyên dương N (1 ≤ N ≤ 100).<br>

Có N hình vuông như sau:

- Hình vuông thứ 1 có cạnh là 1.
- Hình vuông thứ 2 có cạnh là 2.
- Hình vuông thứ 3 có cạnh là 3.
- ...
- Hình vuông thứ N có cạnh là N.

Hãy tính tổng chu vi và diện tích của N hình vuông này.

**Đầu vào**

Số nguyên dương N (1 ≤ N ≤ 100).

**Đầu ra**

Tổng chu vi và diện tích của N hình vuông (Xem thêm ví dụ)

#### Ví dụ

##### Ví dụ 1

| Đầu vào | Đầu ra |
| --- | --- |
| 3 | Tong chu vi: 24<br>Dien tich: 14 |

- Hình vuông thứ 1: Cạnh = 1
    - Chu vi: 1 * 4 = 4
    - Diện tích: 1 * 1 = 1
- Hình vuông thứ 2: Cạnh = 2
    - Chu vi: 2 * 4 = 8
    - Diện tích: 2 * 2 = 4
- Hình vuông thứ 3: Cạnh = 3
    - Chu vi: 3 * 4 = 12
    - Diện tích: 3 * 3 = 9

Tổng chu vi: 4 + 8 + 12 = 24<br>
Tổng diện tích: 1 + 4 + 9 = 14

##### Ví dụ 2

| Đầu vào | Đầu ra |
| --- | --- |
| 5 | Tong chu vi: 60<br>Dien tich: 55 |

### Bài 13: Tính giá trị biểu thức

Nhập vào số nguyên dương N (1 ≤ N ≤ 100).<br>

In ra giá trị của biểu thức:

1 * 2 + 2 * 3 + 3 * 4 + ... + N * (N + 1)

**Đầu vào**

Số nguyên dương N (1 ≤ N ≤ 100).

**Đầu ra**

Giá trị của biểu thức. Xem ví dụ

#### Ví dụ

##### Ví dụ 1

| Đầu vào | Đầu ra |
| --- | ----------- |
| 3 | 1 * 2 + 2 * 3 + 3 * 4 = 20 |

##### Ví dụ 2

| Đầu vào | Đầu ra |
| --- | -----------|
| 5 | 1 * 2 + 2 * 3 + 3 * 4 + 4 * 5 + 5 * 6 = 70 |

### Bài 14: Kích thước hình chữ nhật

Nhập vào số nguyên S là diện tích của hình chữ nhật (1 ≤ S ≤ 1000000).<br>

Hãy tìm ra các cặp số nguyên dương (a, b) sao cho a * b = S và a, b là số nguyên dương.

**Đầu vào**

Số nguyên S (1 ≤ S ≤ 1000000).

**Đầu ra**

Các cặp số nguyên dương (a, b) sao cho a * b = S, mỗi cặp in ra một dòng.

**Ví dụ 1**

| Đầu vào | Đầu ra |
| --- | --- |
| 6 | 1 6<br>2 3<br> 3 2<br>6 1 |

**Ví dụ 2**

| Đầu vào | Đầu ra |
| --- | --- |
| 12 | 1 12<br>2 6<br>3 4<br>4 3<br>6 2<br>12 1 |

**Ví dụ 3**

| Đầu vào | Đầu ra |
| --- | --- |
| 20 | 1 20<br>2 10<br>4 5<br>5 4<br>10 2<br>20 1 |

