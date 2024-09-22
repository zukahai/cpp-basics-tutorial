# Các hàm có sẵn trong thư viện STL

## 1. Hàm `sort()`

Hàm `sort()` được sử dụng để sắp xếp các phần tử trong một dãy.

- **Cú pháp**: `sort(start, end)`
- **Tham số**:
  - `start`: con trỏ đến phần tử đầu tiên của dãy cần sắp xếp.
  - `end`: con trỏ đến phần tử cuối cùng của dãy cần sắp xếp.

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
    sort(a, a + n); // sắp xếp dãy a tăng dần

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
```

## 2. Hàm `sqrt()`

Hàm `sqrt()` được sử dụng để tính căn bậc hai của một số.

- **Cú pháp**: `sqrt(x)`
- **Tham số**:
  - `x`: số cần tính căn bậc hai.

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << sqrt(n); // tính căn bậc hai của n
}
```

## 3. Hàm `abs()`

Hàm `abs()` được sử dụng để tính giá trị tuyệt đối của một số.

- **Cú pháp**: `abs(x)`
- **Tham số**:
  - `x`: số cần tính giá trị tuyệt đối.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = -10;
    cout << abs(n); // 10

    int m = 10;
    cout << abs(m); // 10
}
```

## 4. Hàm `max()`

Hàm `max()` được sử dụng để tìm giá trị lớn nhất trong hai số.

- **Cú pháp**: `max(a, b)`
- **Tham số**:
  - `a`: số thứ nhất.
  - `b`: số thứ hai.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 10, b = 20;
    cout << max(a, b); // 20
}
```

## 5. Hàm `min()`

Hàm `min()` được sử dụng để tìm giá trị nhỏ nhất trong hai số.

- **Cú pháp**: `min(a, b)`
- **Tham số**:
  - `a`: số thứ nhất.
  - `b`: số thứ hai.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 10, b = 20;
    cout << min(a, b); // 10
}
```

## 6. Hàm `reverse()`

Hàm `reverse()` được sử dụng để đảo ngược dãy.

- **Cú pháp**: `reverse(start, end)`
- **Tham số**:
  - `start`: con trỏ đến phần tử đầu tiên của dãy cần đảo ngược.
  - `end`: con trỏ đến phần tử cuối cùng của dãy cần đảo ngược.

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
    reverse(a, a + n); // đảo ngược dãy a

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
```

## 7. Hàm `accumulate()`

Hàm `accumulate()` được sử dụng để tính tổng các phần tử trong dãy.

- **Cú pháp**: `accumulate(start, end, initial)`
- **Tham số**:
  - `start`: con trỏ đến phần tử đầu tiên của dãy.
  - `end`: con trỏ đến phần tử cuối cùng của dãy.
  - `initial`: giá trị khởi tạo cho biến tổng.

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
    int sum = accumulate(a, a + n, 0); // tính tổng các phần tử trong dãy a

    cout << sum;
    return 0;
}
```

## 8. Hàm `count()`

Hàm `count()` được sử dụng để đếm số lần xuất hiện của một phần tử trong dãy.

- **Cú pháp**: `count(start, end, value)`

- **Tham số**:
  - `start`: con trỏ đến phần tử đầu tiên của dãy.
  - `end`: con trỏ đến phần tử cuối cùng của dãy.
  - `value`: giá trị cần đếm.

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
    int x;
    cin >> x;
    int cnt = count(a, a + n, x); // đếm số lần xuất hiện của x trong dãy a

    cout << cnt;
    return 0;
}
```

## 9. Hàm `find()`

Hàm `find()` được sử dụng để tìm kiếm một phần tử trong dãy.

- **Cú pháp**: `find(start, end, value)`

- **Tham số**:
  - `start`: con trỏ đến phần tử đầu tiên của dãy.
  - `end`: con trỏ đến phần tử cuối cùng của dãy.
  - `value`: giá trị cần tìm.

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
    int x;
    cin >> x;
    auto it = find(a, a + n, x); // tìm x trong dãy a

    if (it != a + n) {
        cout << "Found";
    } else {
        cout << "Not found";
    }
    return 0;
}
```

## 10. Hàm `binary_search()`

Hàm `binary_search()` được sử dụng để tìm kiếm một phần tử trong dãy đã được sắp xếp.

- **Cú pháp**: `binary_search(start, end, value)`
- **Tham số**:
  - `start`: con trỏ đến phần tử đầu tiên của dãy.
  - `end`: con trỏ đến phần tử cuối cùng của dãy.
  - `value`: giá trị cần tìm.

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
    int x;
    cin >> x;
    sort(a, a + n); // sắp xếp dãy a trước khi tìm kiếm
    bool found = binary_search(a, a + n, x); // tìm x trong dãy a

    if (found) {
        cout << "Found";
    } else {
        cout << "Not found";
    }
    return 0;
}
```




