# Lấy danh sách các tệp tin đã thay đổi nhưng chưa được staged
$unstaged_files = git diff --name-only

# Lấy danh sách các tệp tin đã staged
$staged_files = git diff --cached --name-only

# Kết hợp danh sách các tệp tin
$all_files = $unstaged_files + "`n" + $staged_files
$all_files = $all_files -split "`n"

foreach ($file in $all_files) {
    if ($file -ne "") {
        # Thêm từng tệp vào staging area
        git add $file
        
        # Commit từng tệp với thông điệp commit cụ thể
        git commit -m "add file $file"
        git push
    }
}

# Đẩy các commit lên remote repository

