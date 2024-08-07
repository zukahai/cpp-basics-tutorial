# Vòng lặp for

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




