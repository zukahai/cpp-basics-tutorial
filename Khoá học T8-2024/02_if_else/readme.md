# Câu lệnh điều kiện

## Câu lệnh if else

### Câu lệnh if

Câu lệnh if dùng để kiểm tra một điều kiện nào đó, nếu điều kiện đó đúng thì thực hiện một hành động nào đó.

Cú pháp:

```cpp

if (điều kiện)
{
    // Thực hiện hành động nếu điều kiện đúng
}

```

Ví dụ:

```cpp

int a = 5;

if (a > 0)
{
    cout << "a la so duong";
}

```

### Câu lệnh if else

Câu lệnh if else dùng để kiểm tra một điều kiện nào đó, nếu điều kiện đó đúng thì thực hiện một hành động nào đó, ngược lại thì thực hiện một hành động khác.

Cú pháp:

```cpp

if (điều kiện)
{
    // Thực hiện hành động nếu điều kiện đúng
}
else
{
    // Thực hiện hành động nếu điều kiện sai
}

```

Ví dụ:

```cpp

int a = 5;

if (a > 0)
{
    cout << "a la so duong";
}
else
{
    cout << "a la so am";
}

```

## Các kiểu so sánh

- So sánh bằng: `==`
- So sánh khác: `!=`
- So sánh lớn hơn: `>`
- So sánh nhỏ hơn: `<`
- So sánh lớn hơn hoặc bằng: `>=`
- So sánh nhỏ hơn hoặc bằng: `<=`

## Các kiểu kết hợp điều kiện

- Và: `&&`
- Hoặc: `||`

Ví dụ:

```cpp

int a = 5;

if (a > 0 && a % 2 == 0)
{
    cout << "a la so duong chan";
}

```

