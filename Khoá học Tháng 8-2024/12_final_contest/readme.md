# Cuộc thi cuối khóa

Đề thi sẽ được cập nhập vào lúc 20:00 ngày 29/09/2024.

# Tuổi của Linh

Nhập vào năm sinh của Linh, hãy tính tuổi của Linh trong năm 2024.

**Đầu vào**:

- Dòng đầu tiên chứa một số nguyên n (1900 ≤ n ≤ 2023) là năm sinh của Linh.

**Đầu ra**:

- Một số nguyên duy nhất là tuổi của Linh trong năm 2024.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 2000 | Tuoi cua Linh la 24 |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 2005 | Tuoi cua Linh la 19 |

## Bài giải

Để tính tuổi của Linh, ta chỉ cần lấy năm 2024 trừ đi năm sinh của Linh.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Tuoi cua Linh la " << 2024 - n;
    return 0;
}
```

# Tính toán phép tính

Nhập vào 3 số nguyên n. Hãy tính giá trị của biểu thức 4n<sup>2</sup> + 3n + 1.

**Đầu vào**:

- Dòng đầu tiên chứa một số nguyên n (-10<sup>9</sup> ≤ n ≤ 10<sup>9</sup>).

**Đầu ra**:

- Một số nguyên duy nhất là giá trị của biểu thức 4n<sup>2</sup> + 3n + 1.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 1 | 8 |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 2 | 23 |

## Bài giải

Để tính giá trị của biểu thức 4n<sup>2</sup> + 3n + 1, ta chỉ cần thay n vào biểu thức.

Chú ý: Kết quả sẽ vượt quá kiểu `int`. Để tránh tràn số, ta nên sử dụng kiểu dữ liệu `long long`.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << 4 * n * n + 3 * n + 1;
    return 0;
}
```

# Số có 3 chữ số

Nhập vào một số nguyên dương n (100 ≤ n ≤ 999). Kiểm tra xem tổng các chữ số của n có phải là số chẵn hay không. Nếu đúng in ra "YES", ngược lại in ra "NO".

**Đầu vào**:

- Dòng đầu tiên chứa một số nguyên n (100 ≤ n ≤ 999).

**Đầu ra**

- Dòng đầu tiên chứa 3 chữ số lần lượt là các chữ số trong n.
- Dòng thứ hai chứa một trong 2 chuỗi "YES" hoặc "NO" tương ứng với tổng các chữ số của n có phải là số chẵn hay không.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 123 | 1 2 3<br>YES |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 234 | 2 3 4<br>NO |

## Bài giải

Để kiểm tra tổng các chữ số của n có phải là số chẵn hay không, ta cần lấy từng chữ số của n và cộng lại. Nếu tổng là số chẵn thì in ra "YES", ngược lại in ra "NO".

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    cout << a << " " << b << " " << c << endl;
    if ((a + b + c) % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
```

# Tính tiền điện

Để các hộ dân tiêu dùng tiết kiệm điện, một công ty điện lực đã quyết định áp dụng giá bán điện theo bảng sau: (Số liệu chỉ mang tính chất minh họa)

- 50 số đầu tiên: Giá là 100 đồng mỗi số
- 50 số tiếp theo: Giá là 150 đồng mỗi số
- Các số tiếp theo: Giá là 200 đồng mỗi số

Hãy nhập vào số điện sử dụng và tính tiền điện cần trả.

**Đầu vào:**

- Một số nguyên `n` là số điện sử dụng

**Đầu ra:**

- In ra màn hình số tiền điện cần trả

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-------------------------|
| 30   | 3000                    |

**Giải thích:**<br>

- 30 số đầu tiên: 30 * 100 = 3000

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-------------------------|
| 60   | 6500                    |

**Giải thích:**<br>

- 50 số đầu tiên: 50 * 100 = 5000
- 10 số tiếp theo: 10 * 150 = 1500

Tổng cộng: 5000 + 1500 = 6500

#### Ví dụ 3:

| Input | Output                  |
|:-------|:-------------------------|
| 120   | 16500                    |

**Giải thích:**<br>

- 50 số đầu tiên: 50 * 100 = 5000
- 50 số tiếp theo: 50 * 150 = 7500
- 20 số tiếp theo: 20 * 200 = 4000

Tổng cộng: 5000 + 7500 + 4000 = 16500

## Bài giải

Để tính tiền điện cần trả, ta cần xác định số lượng số điện sử dụng ở mỗi mức giá.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cost = 0;
    if (n <= 50) {
        cost = n * 100;
    } else if (n <= 100) {
        cost = 50 * 100 + (n - 50) * 150;
    } else {
        cost = 50 * 100 + 50 * 150 + (n - 100) * 200;
    }
    cout << cost;
    return 0;
}
```

# Tính giá trị biểu thức

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
| :--- | :----------- |
| 3 | 1 * 2 + 2 * 3 + 3 * 4 = 20 |

##### Ví dụ 2

| Đầu vào | Đầu ra |
| :--- | :-----------|
| 5 | 1 * 2 + 2 * 3 + 3 * 4 + 4 * 5 + 5 * 6 = 70 |

## Bài giải

Để tính giá trị của biểu thức, ta cần lặp từ 1 đến N và cộng lại.

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1);
        cout << i << " * " << i + 1;
        if (i < n) {
            cout << " + ";
        }
    }
    cout << " = " << sum;
}

```

# Phần tử lẻ ở chỉ số chẵn

Nhập vào một dãy số nguyên gồm N phần tử.
Hãy in ra các phần tử ở vị trí chẵn mà có giá trị lẻ.

**Đầu vào**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>5</sup>).

- Dòng thứ hai chứa N số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>N-1</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra**

- In ra các số nguyên lẻ ở vị trí chẵn trên cùng một dòng, cách nhau bởi dấu cách. Nếu không có số nào thỏa mãn, in ra "NULL".

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 5<br>2 7 3 4 5 | 3 5 |

Có 3 số ở vị trí chẵn: 2, 3, 5. Trong đó có 2 số lẻ là 3 và 5.

| Input | Output |
| :--- | :--- |
| 4<br>2 3 6 8 | NULL |

Không có số nào ở vị trí chẵn có giá trị lẻ.

## Bài giải

Để in ra các phần tử ở vị trí chẵn mà có giá trị lẻ, ta cần duyệt qua từng phần tử và kiểm tra điều kiện. Nếu `i` chẵn và `a[i]` lẻ thì in ra. Đếm số lượng phần tử thỏa mãn, nếu số lượng bằng 0 thì in ra "NULL".

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && a[i] % 2 != 0) {
            cout << a[i] << " ";
            count++;
        }
    }
    if (count == 0) {
        cout << "NULL";
    }
    return 0;
}
```

# Phân nửa số K

Nhập vào một dãy số nguyên gồm N phần tử.
Đếm số lượng những số nhỏ hơn một nửa số K.

**Đầu vào**

- Dòng đầu tiên chứa số nguyên N và K (1 ≤ N, K ≤ 10<sup>5</sup>).

- Dòng thứ hai chứa N số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>N-1</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra**

- Số lượng số nhỏ hơn một nửa số K.

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 5 10<br>2 7 3 4 5 | 3 |

**Giải thích:**

Giá trị của K là 10. Một nửa số K là 5. Có 3 số nhỏ hơn 5 là 2, 3, 4.

| Input | Output |
| :--- | :--- |
| 4 2<br>2 3 6 8 | 0 |

## Bài giải

Để đếm số lượng những số nhỏ hơn một nửa số K, ta cần duyệt qua từng phần tử và kiểm tra điều kiện. Nếu `a[i]` nhỏ hơn một nửa số K thì tăng biến đếm lên 1. Nhớ là phải chia cho 2.0 để lấy giá trị thực.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < k / 2.0) {
            count++;
        }
    }
    cout << count;
    return 0;
}
```

# Tìm số nhỏ và lớn nhất trong mỗi hàng của mảng 2 chiều

Viết chương trình nhập mảng 2 chiều `a` kích thước `m x n`.
Hãy tìm số nhỏ nhất và lớn nhất trong mỗi hàng của mảng 2 chiều `a`.

**Input:**

- Dòng đầu tiên chứa 2 số nguyên `m`, `n` (1 ≤ m, n ≤ 1000)
- m dòng tiếp theo, mỗi dòng chứa n số nguyên cách nhau bởi dấu cách là các phần tử của mảng 2 chiều `a` (-10<sup>9 </sup> ≤ a[i][j] ≤ 10<sup>9</sub>)

**Output:**

- m dòng, mỗi dòng chứa 2 số nguyên cách nhau bởi dấu cách là số nhỏ nhất và lớn nhất trong hàng tương ứng của mảng 2 chiều `a`.

### Ví dụ:

### Ví dụ 1:

| Input | Output |
|:-------|:--------|
| 2 3<br> 10 2 3<br> 4 5 6 | 2 10<br>4 6 |

### Ví dụ 2:

| Input | Output |
|:-------|:--------|
| 3 3<br> 1 20 3<br> 4 50 60<br> 7 8 9 | 1 20<br>4 60<br>7 9 |

### Ví dụ 3:

| Input | Output |
|:-------|:--------|
| 3 5<br> 1 5 6 7 2<br> 3 4 5 6 7<br> 1 2 3 4 5 | 1 7<br> 3 7<br> 1 5 |

## Bài giải

Để tìm số nhỏ nhất và lớn nhất trong mỗi hàng của mảng 2 chiều `a`, ta cần duyệt qua từng hàng và tìm số nhỏ nhất và lớn nhất.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int min = a[i][0];
        int max = a[i][0];
        for (int j = 1; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}
```

# Bảng chữ cái

Trong một nhà hàng có một biển quảng cáo có thể hiển thị một chữ cái. Các chữ cái từ 'A' đến 'Z'. Sau mỗi lần hiển thị, chữ cái sẽ chuyển sang chữ cái tiếp theo trong bảng chữ cái. Nếu chữ cái hiện tại là 'Z', nó sẽ chuyển sang 'A'.

Biết rằng ở giây thứ 1, biển quảng cáo sẽ hiển thị chữ cái 'A'. Ở giây thứ 2, biển quảng cáo sẽ hiển thị chữ cái 'B'. Và cứ như vậy.

Hãy viết chương trình nhập vào một số nguyên dương `n` (1 ≤ n ≤ 10<sup>9</sup>) và in ra chữ cái hiển thị trên biển quảng cáo ở giây thứ `n`.

**Input:**

- Dòng đầu tiên chứa số nguyên `n` (1 ≤ n ≤ 10<sup>9</sup>).

**Output:**

- In ra chữ cái hiển thị trên biển quảng cáo ở giây thứ `n`.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 1 | A |

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 2 | B |

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 26 | Z |

**Ví dụ 4**

| Input | Output |
|:-------|:--------|
| 27 | A |

## Bài giải

Để tìm chữ cái hiển thị trên biển quảng cáo ở giây thứ `n`, ta chỉ cần lấy `n` chia cho 26 lấy dư. Lý do là cứ 26 giây thì chữ cái sẽ quay lại từ 'A'.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    n = (n - 1) % 26;
    cout << char('A' + n);
}
```

