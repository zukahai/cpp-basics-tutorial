# Buổi 2 Câu lệnh điều kiện và vòng lặp for

## Đánh giá chung buổi học

**Ưu điểm:**
Tư duy nhạy bén, học hỏi nhanh, xử lý vấn đề nhanh chóng.

**Nhược điểm:**
Thời gian làm bài tập còn ít, còn nhầm lẫn về cú pháp chia lấy dư (**%**) và chia lấy phần nguyên (**/**).

## Tóm tắt lý thuyết buổi học

### Gộp toán tử

Gộp này chỉ để viết ngắn gọn hơn, không ảnh hưởng đến hiệu suất chương trình.

- `+=`: Cộng và gán. Ví dụ: `a += 5` tương đương với `a = a + 5`.
- `-=`: Trừ và gán. Ví dụ: `a -= 5` tương đương với `a = a - 5`.
- `*=`: Nhân và gán. Ví dụ: `a *= 5` tương đương với `a = a * 5`.
- `/=`: Chia và gán. Ví dụ: `a /= 5` tương đương với `a = a / 5`.
- `%=`: Chia lấy phần dư và gán. Ví dụ: `a %= 5` tương đương với `a = a % 5`.
- `++`: Tăng 1 đơn vị. Ví dụ: `a++` tương đương với `a = a + 1`.
- `--`: Giảm 1 đơn vị. Ví dụ: `a--` tương đương với `a = a - 1`.

### Gộp lệnh cin và cout

Có thể gộp nhiều lệnh cout liên tiếp thành một lệnh cout duy nhất. Tuơng tự với lệnh cin.

Ví dụ:

```cpp
int a, b;
cin >> a >> b;
cout << a << " + " << b << " = " << a + b << endl;
```

### Câu lệnh điều kiện

#### Điều kiện

Điều kiện là một biểu thức có giá trị `true` hoặc `false`.
Ví dụ `a > b` là một điều kiện, nếu `a` lớn hơn `b` thì điều kiện đúng, ngược lại điều kiện sai.

Có thể kết hợp nhiều điều kiện lại với nhau bằng các toán tử logic:

- `&&`: Toán tử và. Ví dụ: `a > b && b > c` là điều kiện đúng nếu `a` lớn hơn `b` và `b` lớn hơn `c`.
- `||`: Toán tử hoặc. Ví dụ: `a > b || b > c` là điều kiện đúng nếu `a` lớn hơn `b` hoặc `b` lớn hơn `c`.

#### Câu lệnh điều kiện

Câu lệnh điều kiện dùng để kiểm tra một điều kiện nào đó, nếu đúng thì thực hiện một hành động nào đó, ngược lại thì thực hiện một hành động khác.

Cú pháp:

```cpp
if (điều kiện) {
    // Thực hiện hành động
}
```
Hành động được thực hiện khi điều kiện đúng.

```cpp
if (điều kiện) {
    // Thực hiện hành động 1
} else {
    // Thực hiện hành động 2
}
```

Hành động 1 được thực hiện khi điều kiện đúng, hành động 2 được thực hiện khi điều kiện sai.

### Vòng lặp for

Vòng lặp for có cấu trúc như sau:

```cpp
for (Khởi tạo; điều kiện; thay đổi) {
    // Khối lệnh
}
```

- `Khởi tạo`: Thực hiện một lần duy nhất khi bắt đầu vòng lặp.
- `Điều kiện`: Kiểm tra điều kiện, nếu đúng thì thực hiện `khối lệnh` và `thay đổi`, ngược lại thoát khỏi vòng lặp.

Ví dụ cụ thể:

```cpp
for (int i = 0; i < 3; i++) {
    cout << i << endl;
}
```

Kết quả:

```
0
1
2
```

Quy trình thực hiện của vòng lặp for:

1. Khởi tạo: `int i = 0`.
2. Kiểm tra điều kiện: `i < 3` đúng (i = 0).
3. Thực hiện khối lệnh: `cout << i << endl`. (in ra 0)
4. Thay đổi: `i++`.
5. Kiểm tra điều kiện: `i < 3` đúng (i = 1).
6. Thực hiện khối lệnh: `cout << i << endl`. (in ra 1)
7. Thay đổi: `i++`.
8. Kiểm tra điều kiện: `i < 3` đúng (i = 2).
9. Thực hiện khối lệnh: `cout << i << endl`. (in ra 2)
10. Thay đổi: `i++`.
11. Kiểm tra điều kiện: `i < 3` sai (i = 3).
12. Kết thúc vòng lặp.

## Bài tập

### Bài 1: Kiểm tra số chẵn lẻ

Nhập vào một số nguyên `n`, kiểm tra xem `n` có phải là số chẵn hay không.

Ví dụ:

- Nhập `5`, kết quả: `5 là số lẻ`.
- Nhập `6`, kết quả: `6 là số chẵn`.

### Bài 2: Kiểm tra số tự nhiên

Nhập vào một số nguyên `n`, kiểm tra xem `n` có phải là số tự nhiên hay không.

Ví dụ:

- Nhập `5`, kết quả: `5 là số tự nhiên`.
- Nhập `-7`, kết quả: `-7 không phải là số tự nhiên`.

### Bài 3: In ra số n

Nhập vào một số nguyên `n`, in ra màn hình các số từ `1` đến `n`.

Ví dụ:

- Nhập `5`, kết quả: `1 2 3 4 5`.

### Bài 4: In ra các số có tận cùng là 5

Nhập vào một số nguyên `n`, in ra màn hình các số từ `1` đến `n` có tận cùng là `5`.

Ví dụ:

- Nhập `50`, kết quả: `5 15 25 35 45`.

### Bài 5: Tính tổng các số từ 1 đến n

Nhập vào một số nguyên `n`, tính tổng các số từ `1` đến `n`.

Ví dụ:

- Nhập `5`, kết quả: `15`.

Vì `1 + 2 + 3 + 4 + 5 = 15`.









