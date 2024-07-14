# Buổi 1: Các lệnh nhập xuất, kiểu dữ liệu và toán tử cơ bản

## Nhắc qua về lý thuyết

### Cấu trúc chương trình C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello world!";
    return 0;
}
```

Trong đó:
- `#include <bits/stdc++.h>`: Thư viện chuẩn của C++.
- `using namespace std;`: Dùng để sử dụng các hàm trong thư viện chuẩn mà không cần ghi rõ tên thư viện.
- `int main() { ... }`: Hàm main, nơi chương trình bắt đầu thực thi.

### Các kiểu dữ liệu cơ bản

- `int`: Kiểu số nguyên.
- `float`: Kiểu số thực.
- `string`: Kiểu chuỗi.

### Các toán tử cơ bản

- `+`: Cộng.
- `-`: Trừ.
- `*`: Nhân.
- `/`: Chia lấy phần nguyên.
- `%`: Chia lấy phần dư.

### Lệnh cout và cin

- `cout`: Dùng để in ra màn hình.
- `cin`: Dùng để nhập từ bàn phím.

Ví dụ:

```cpp
int a;
cin >> a;
cout << a;
```
