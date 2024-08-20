# Hướng dẫn cài đặt môi trường C++

Để chạy C++ các em cần sử dụng một IDE có thể chạy được C++. Khuyên dùng DevC++ để chạy vì thông thường trong các cuộc thi đều sẽ có IDE này.

## Cách tải DevC++

1. Truy cập: [DevC++ trên SourceForge](https://sourceforge.net/projects/orwelldevcpp/)
2. Chọn **Download**
3. Sau khi tải xong, mở file vừa tải và cài đặt theo các bước sau:
    - **Bước 1:** Chọn ngôn ngữ, mặc định là English vì không có tiếng Việt.
    - **Bước 2:** Chọn **I Agree**
    - **Bước 3:** Chọn **Next**
    - **Bước 4:** Chọn **Install** và chờ các thư viện được tải về.
    - **Bước 5:** Chọn **Finish** để hoàn tất cài đặt.

Sau khi cài đặt xong, DevC++ sẽ tự động mở ra. Ban đầu cần chọn một số cài đặt cho DevC++, chọn **Next** hết.

## Cách tạo chương trình C++

1. Mở DevC++.
2. Chọn **File -> New -> Source File** hoặc tổ hợp phím `Ctrl + N`.
3. Chọn **File -> Save** hoặc tổ hợp phím `Ctrl + S` để đặt tên cho chương trình, ví dụ: `test.cpp`.
4. Gõ thử đoạn chương trình sau vào cửa sổ làm việc:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        cout << "Hello world!";
        return 0;
    }
    ```

5. Để chạy thử chương trình, bấm vào biểu tượng **Compile & Run**.

Nếu có cửa sổ mới hiện ra kết quả như bên dưới thì em đã cài đặt thành công. Đây là bước khởi đầu rất quan trọng, sau này chính em sẽ là người tự tạo ra những chương trình của riêng mình trên DevC++.

Được viết bởi Phan Đức Hải – HaiZuka
