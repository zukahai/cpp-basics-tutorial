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

## in chuỗi kèm biến

### Ví dụ 1

Cho a = 5, in ra màn hình dòng chữ "Gia tri cua a la 5".

Mình sẽ phân tích "Gia tri cua a la 5" thành 2 phần:

- "Gia tri cua a la ": chuỗi cố định.
- a: biến.

Để in ra màn hình dòng chữ "Gia tri cua a la 5", ta sẽ viết như sau:

```cpp
int a = 5;
cout << "Gia tri cua a la ";
cout << a;
```

### Ví dụ 2

Cho tuoi = 18, in ra màn hình dòng chữ "Nam nay toi 18 tuoi".

Mình sẽ phân tích "Nam nay toi 18 tuoi" thành 3 phần:

- "Nam nay toi ": chuỗi cố định.
- tuoi: biến.
- " tuoi": chuỗi cố định.
