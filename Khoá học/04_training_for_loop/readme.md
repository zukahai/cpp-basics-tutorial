# Ôn tập vào lặp for

## Bài 1: Giá trị gấp đôi, gấp ba

Nhập vào một số N (1 <= N <= 1000). In ra giá trị gấp đôi và gấp ba của số đó

Từ 1 đến n, hãy in ra giá trị gấp đôi và gấp ba của số đó

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra N dòng, Mỗi dòng gôm 2 số, số thứ nhất là giá trị gấp đôi của số đó, số thứ hai là giá trị gấp ba của số đó

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | 2 3 <br> 4 6 <br> 6 9 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | 2 3 <br> 4 6 <br> 6 9 <br> 8 12 <br> 10 15 |

## Bài 2: In ra bảng cửa chương 2

Viết chương trình in ra bảng cửu chương 2 (xem ví dụ)

**Đầu vào:** 
Không có

**Đầu ra:**

```
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
```

### Ví dụ

| Input | Output |
|-------|--------|
|       | 2 x 1 = 2 <br> 2 x 2 = 4 <br> 2 x 3 = 6 <br> 2 x 4 = 8 <br> 2 x 5 = 10 <br> 2 x 6 = 12 <br> 2 x 7 = 14 <br> 2 x 8 = 16 <br> 2 x 9 = 18 <br> 2 x 10 = 20 |

## Bài 3: Bảng cửa chương N

Viết chương trình in ra bảng cửu chương của số N (xem ví dụ)

**Đầu vào:**

- Số nguyên N (2 <= N <= 9)

**Đầu ra:**

Bang cửu chương của N

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | 3 x 1 = 3 <br> 3 x 2 = 6 <br> 3 x 3 = 9 <br> 3 x 4 = 12 <br> 3 x 5 = 15 <br> 3 x 6 = 18 <br> 3 x 7 = 21 <br> 3 x 8 = 24 <br> 3 x 9 = 27 <br> 3 x 10 = 30 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | 5 x 1 = 5 <br> 5 x 2 = 10 <br> 5 x 3 = 15 <br> 5 x 4 = 20 <br> 5 x 5 = 25 <br> 5 x 6 = 30 <br> 5 x 7 = 35 <br> 5 x 8 = 40 <br> 5 x 9 = 45 <br> 5 x 10 = 50 |

## Bài 4 Giá trị hiện tại, bình phương, lập phương

Nhập vào một số N (1 <= N <= 1000). In ra giá trị hiện tại, bình phương và lập phương của số đó

Từ 1 đến n, hãy in ra giá trị hiện tại, bình phương và lập phương của số đó

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra N dòng, Mỗi dòng gôm 3 số, số thứ nhất là giá trị hiện tại, số thứ hai là giá trị bình phương, số thứ ba là giá trị lập phương

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | 1 1 1 <br> 2 4 8 <br> 3 9 27 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | 1 1 1 <br> 2 4 8 <br> 3 9 27 <br> 4 16 64 <br> 5 25 125 |

## Bài 5: In ra N dấu *

Nhập vào một số N (1 <= N <= 1000). In ra N dấu *

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra N dấu *

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | *** |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | ***** |

## Bài 6: In ra hình vuông dấu *

Nhập vào một số N (1 <= N <= 1000). In ra hình vuông có cạnh dài N dấu *

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra hình vuông có cạnh dài N dấu *

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | *** <br> *** <br> *** |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | ***** <br> ***** <br> ***** <br> ***** <br> ***** |

**Hint:** Sử dụng 2 vòng lặp for lồng nhau

```cpp
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cout << "*";
    }
    cout << endl;
}
```

## Bài 7: In ra hình tam giác vuông cân

Nhập vào một số N (1 <= N <= 1000). In ra hình tam giác vuông cân có chiều cao N

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra hình tam giác vuông cân có chiều cao N

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | * <br> ** <br> *** |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | * <br> ** <br> *** <br> **** <br> ***** |

## Bài 8: In ra tam giác số

Nhập vào một số N (1 <= N <= 1000). In ra hình tam giác số có chiều cao N

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra hình tam giác số có chiều cao N

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 3     | 1 <br> 1 2 <br> 1 2 3 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 5     | 1 <br> 1 2 <br> 1 2 3 <br> 1 2 3 4 <br> 1 2 3 4 5 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 7     | 1 <br> 1 2 <br> 1 2 3 <br> 1 2 3 4 <br> 1 2 3 4 5 <br> 1 2 3 4 5 6 <br> 1 2 3 4 5 6 7 |

## Bài 9: Số lớn nhất

Nhập vào một số N (0 <= N <= 1000). In ra số lớn nhất trong khoảng từ 0 đến N mà chia hết cho 5

**Đầu vào:**

- Số nguyên N (1 <= N <= 1000)

**Đầu ra:**

In ra số lớn nhất trong khoảng từ 0 đến N mà chia hết cho 5

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 7     | 5 |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 123   | 120 |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 1000  | 1000 |

## Ước số chung lớn nhất

Nhập vào 2 số nguyên a và b (1 <= a, b <= 1000). In ra ước số chung lớn nhất của a và b

*Ước số chung lớn nhất của 2 số a và b là số lớn nhất mà a và b đều chia hết*

**Đầu vào:**

- 2 số nguyên a và b (1 <= a, b <= 1000)

**Đầu ra:**

In ra ước số chung lớn nhất của a và b

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6 9   | 3      |

*6 và 9 đều chia hết cho 3, 3 là ước số chung lớn nhất của 6 và 9*

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 12 18 | 6      |

*12 và 18 đều chia hết cho 6, 6 là ước số chung lớn nhất của 12 và 18*

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 15 25 | 5      |

*15 và 25 đều chia hết cho 5, 5 là ước số chung lớn nhất của 15 và 25*
